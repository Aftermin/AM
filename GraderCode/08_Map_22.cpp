#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    long t,money;
    cin >> t;
    map<string,double> m;
    double f,vs;
    string s,st,sg;
    m["THB"]=1;
    while(t--){
        cin >> s >> f;
        m[s]=f;
    }
    cin >> vs >> st;
    cout << vs << ' ' << st;
    vs=vs*m[st];
    cin.ignore();
    getline(cin,s);
    s+=' ';
    for(int i=0;i<s.length();i++){
        if(s[i]!=' ') sg+=s[i];
        else{
            vs=int(vs/m[sg]);
            money=vs;
            cout << " -> " << money << ' ' << sg;
            vs=vs*m[sg];
            sg="";
        }
    }
}