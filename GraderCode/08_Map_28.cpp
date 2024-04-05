#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main(){
    map< string,vector<string> > m;
    string s,name,song;
    int j,t;
    cin >> t;
    cin.ignore();
    while(t--){
        name="",song="";
        getline(cin,s);
        for(int i=0;i<s.length();i++){
            if(s[i]!=',') song+=s[i];
            else{
                j=i+2;
                break;
            }
        }
        for(int i=j;i<s.length();i++) name+=s[i];
        m[song].push_back(name);
    }
    string s1;
    getline(cin,s1);
    s1+=',',song="";
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=',') song+=s1[i];
        else{
            cout << song << " -> ";
            if(m[song].empty()){
                cout << "Not found" << endl;;
                song="",i++;
                continue;;
            }
            for(int i=0;i<m[song].size();i++){
                cout << m[song][i];
                if(i!=m[song].size()-1) cout << ", ";
            }
            cout << endl;
            song="",i++;
        }
    }
}