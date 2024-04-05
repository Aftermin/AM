#include <iostream>
using namespace std;

int main(){
    int n,cn=0,t=0;
    cin >> n;
    int m=n*n;
    int a[m],b[m];
    for(int i=0;i<m;i++){
        cin >> a[i];
        b[i]=a[i];
    }
    for(int i=0;i<m;i++){
        if(a[i]==0){
            t=i;
            continue;
        } 
        for(int j=i+1;j<m;j++){
            if(b[j]==0) continue;
            if(a[i]>b[j]) cn++;
        }
    }
    if(n%2==1&&cn%2==0) cout << "YES";
    else if(n%2==0&&cn%2==1&&(t/n)%2==0) cout << "YES";
    else if(n%2==0&&cn%2==0&&(t/n)%2==1) cout << "YES";
    else cout << "NO";
}