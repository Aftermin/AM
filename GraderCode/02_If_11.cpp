#include <iostream>
#include <string>
using namespace std;

int main(){
    int x;
    string a;
    cin >> a;
    if(a.length()==2&&(a[0]=='0'&&(a[1]=='1'||a[1]=='2'))) cout <<"OK";
    else if(a.length()==2&&(a[0]>='2'&&a[0]<='4')){
        x=stoi(a);
        if(x>=20&&x<=40) cout <<"OK";
        else cout << "Error";
    }
    else if((a.length()==2)&&(a[0]=='5')&&(a[1]=='1'||a[1]=='3'||a[1]=='5'||a[1]=='8')) cout <<"OK";
    else cout << "Error";
}