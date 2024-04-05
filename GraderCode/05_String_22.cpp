#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int ans=0,c=0,a1=0,a2=0;
    string a,b;
    cin >> a >> b;
    for(int i=0;i<b.length();i++){
        for(int j=0;j<a.length();j++){
            if(a[j]==b[i+j]) c++;
            if(j==a.length()-1){
                if(c>ans){
                    a1=i;
                    ans=max(ans,c);
                }
                c=0;
            }
        }
    }
    for(int i=0;i<a.length();i++){
        for(int j=0;j<b.length();j++){
            if(b[j]==a[i+j]) c++;
            if(j==b.length()-1){
                if(c>ans){
                    a2=i;
                    ans=max(ans,c);
                }
                c=0;
            }
        }
    }
    if(a2==0){
        for(int i=0;i<a1;i++) cout << '-';
        cout << a << endl << b << endl;
    }
    else{
        cout << a << endl;
        for(int i=0;i<a2;i++) cout << '-';
        cout << b << endl;
    }
    cout << ans;
}