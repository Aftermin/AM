#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string,string> a,b;
    int t;
    string s1,s2;
    cin >> t;
    cin.ignore();
    while(t--){
        cin >> s1 >> s2;
        a[s1]=s2;
        b[s2]=s1;
    }
    cin>> t;
    cin.ignore();
    while(t--){
        cin >> s1;
        if(a.find(s1)==a.end()&&b.find(s1)==b.end()){
            cout << "Not found" << endl;
            continue;
        }
        cout << a[s1];
        cout << b[s1];
        cout << endl;
    }
}