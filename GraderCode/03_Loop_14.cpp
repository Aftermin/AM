#include <iostream>
#include <string>
using namespace std;

int main(){
    int ans=0;
    string a,b;
    getline(cin,a);
    getline(cin,b);
    for(int i=0;i<a.length();i++){
        if(a.length()!=b.length()){
            cout << "Incomplete answer";
            break;
        }
        if(a[i]==b[i]) ans++;
    }
    if(a.length()==b.length()) cout << ans;
}