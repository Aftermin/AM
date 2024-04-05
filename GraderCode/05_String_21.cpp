#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    for(int i=0;i<a.length();i++){
        cout << a[i];
        if((a[i]>='0'&&a[i]<='9')&&!(a[i+1]>='0'&&a[i+1]<='9')&&i!=a.length()-1) cout << ", ";
        else if(a[i+1]>='A'&&a[i+1]<='Z') cout << ", ";
        else if((a[i+1]>='0'&&a[i+1]<='9')&&!(a[i]>='0'&&a[i]<='9')) cout << ", ";
    }
}