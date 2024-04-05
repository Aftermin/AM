#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b;
    int c=0,ans=0,ch1=0,ch2=0;
    getline(cin,a);
    getline(cin,b);
    for(int i=0;i<b.length();i++){
        ch1=1;
        c=0;
        if((b[i-1]>='A'&&b[i-1]<='Z')||(b[i-1]>='a'&&b[i-1]<='z')||(b[i+a.length()]>='A'&&b[i+a.length()]<='Z')||(b[i+a.length()]<='z'&&b[i+a.length()]>='a')) ch1=0;
        if(b[i]==a[0]&&ch1){
            for(int j=0;j<a.length();j++){
                if(b[i+j]==a[j]) c++;
                else break;
            }
            if(c==a.length()){
                ans++;
                i=i+a.length();
            }
        }
    }
    cout << ans;
}