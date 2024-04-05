#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<string> a;
    string s,s1,s2;
    cin >> s;
    s+="$";
    a.push_back(s);
    for(int i=0;i<s.length()-1;i++){
        s2="";
        s1+=a[0][i];
        for(int j=i+1;j<s.length();j++){
            s2+=a[0][j];
        }
        s2+=s1;
        a.push_back(s2);
    }
    s="";
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        s+=a[i][a[i].length()-1];
    }
    cout << s;
}