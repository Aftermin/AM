#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    map< string,vector<string> > m;
    int cn=0,c=0;
    vector<string> an;
    string s,s1,s2;
    while(1){
        s1="",s2="";
        getline(cin,s);
        if(s.empty()) break;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                cn=i;
                break;
            }
            s1+=s[i];
        }
        for(int i=cn+1;i<s.length();i++){
            s2+=s[i];
        }
        m[s2].push_back(s1);
        for(int i=0;i<an.size();i++){
            c=0;
            if(s2==an[i]){
                c=1;
                break;
            }
        }
        if(c==0) an.push_back(s2);
    }
    for(int i=0;i<an.size();i++){
        cout << an[i] << ": ";
        for(int j=0;j<m[an[i]].size();j++){
            cout << m[an[i]][j] << ' ';
        }
        cout << endl;
    }
}