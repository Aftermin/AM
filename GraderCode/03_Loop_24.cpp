#include <iostream>
using namespace std;

int main(){
    int c=1;
    string a;
    cin >> a;
    a=a+'?';
    for(int i=1;i<a.length();i++){
        if(a[i]==a[i-1]) c++;
        else if(a[i]!=a[i-1]){
            cout << a[i-1] << ' ' << c << ' ';
            c=1;
        }
    }
}
