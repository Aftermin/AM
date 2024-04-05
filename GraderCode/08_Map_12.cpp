#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string,string> a;
    int t,cn=0;
    string s,s1,s2;
    cin >> t;
    cin.ignore();
    while(t--){
        s1="",s2="",cn=0;
        getline(cin,s);
        for(int i=0;i<s.length();i++){
            if(s[i]==' ') cn++;
            if(cn==2){
                cn=i;
                break;
            }
            s1+=s[i];
        }
        for(int i=cn+1;i<s.length();i++){
            s2+=s[i];
        }
        a[s1]=s2;
        a[s2]=s1;
    }
    cin >> t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        if(a.find(s)==a.end()){
            cout << s << " --> Not found" << endl;
            continue;
        }
        cout << s << " --> " << a[s] << endl;
    }
}