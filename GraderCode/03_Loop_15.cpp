#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    for(int i=0;i<a.length();i++){
        if(a=="no parentheses"){
            cout << "no parentheses";
            break;
        }
        else if(a[i]=='(') cout << '[';
        else if(a[i]==')') cout << ']';
        else if(a[i]=='[') cout << '(';
        else if(a[i]==']') cout << ')';
        else cout << a[i];
    }
}