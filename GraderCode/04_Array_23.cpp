#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,ans=0;
    cin >> n;
    string a[n],b,c,x,y;
    int d[n];
    for(int i=0;i<n;i++){
        cin >> a[i] >> d[i];
    }
    cin.ignore();
    getline(cin,b);
    for(int i=11;i<b.length();i=i+7){
        x=b[i];
        y=b[i+1];
        c=x+y;
        if(c[0]!=b[i-7] or c[1]!=b[i-6]){
            for(int j=0;j<n;j++){
                if(c==a[j]){
                    ans=ans+d[j];
                    break;
                } 
            }
        }
    }
    cout << ans;
}