#include <iostream>
#include <string>
using namespace std;

int main(){
    int n=26;
    char a[n];
    for(int i=0;i<n;i++) a[i]='a'+i;
    int b[n];
    for(int i=0;i<n;i++) b[i]=0;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        for(int j=0;j<n;j++){
            if(s[i]==a[j] || s[i]==a[j]-32){
                b[j]++;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(b[i]!=0) cout << a[i] << " -> " << b[i] << endl;
    }
}