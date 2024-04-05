#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    double a[n],b[n],ans=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        ans=0;
        for(int j=n-i-1;j>=0;j--){
            if(j==0) ans=ans+a[j];
            else if(j==n-i-1) ans=1/a[j];
            else ans=1/(ans+a[j]);
        }
        b[i]=ans;
    }
    for(int i=n-1;i>=0;i--){
        cout << setprecision(10) << b[i] << endl;
    }
}