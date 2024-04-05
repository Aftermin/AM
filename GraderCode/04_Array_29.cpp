#include <iostream>
#include  <algorithm>
using namespace std;

int area(int r1[],int r2[]){
    int xl=max(r1[0],r2[0]);
    int xr=min(r1[2],r2[2]);
    int yb=max(r1[1],r2[1]);
    int yt=min(r1[3],r2[3]);
    if(xr<xl||yt<yb) return 0;
    return (xr-xl)*(yt-yb);
}

int main(){
    int n;
    cin >> n;
    int a[n][4];
    for(int i=0;i<n;i++) cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
    int A[n][n];
    int max_a=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            A[i][j]=area(a[i],a[j]);
            max_a=max(max_a,A[i][j]);
        }
    }
    if(max_a==0) cout << "No overlaps";
    else {
        cout << "Max overlapping area = " << max_a << endl;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(A[i][j]==max_a) cout << "rectangles " << i << " and " << j << endl;
            }
        }
    }
}