#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,ans=0;
    cin >> n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) b[i]=a[i],c[i]=a[i];
    for(int i=1;i<n-1;i++){
        b[i]=max(b[i],b[i-1]);
    }
    for(int i=n-2;i>0;i--){
        c[i]=max(c[i],c[i+1]);
    }
    for(int i=0;i<n;i++){
        ans=ans+min(b[i],c[i])-a[i];
    }
    cout << ans;
}
/*
14
10 5 4 3 2 1 2 3 4 5 6 7 8 9
14
1 4 2 5 1 1 4 2 3 1 6 4 5 1 
*/