#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    multiset<char> a1,a2;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]==' ') continue;
        if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
        a1.insert(s[i]);
    }
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]==' ') continue;
        if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
        a2.insert(s[i]);
    }
    if(a1==a2) cout << "YES";
    else cout << "NO";
}