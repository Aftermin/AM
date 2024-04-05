#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e,s;
    cin >> a >> b >> c >> d >> e;
    if(a>b){
        s=a;
        a=b;
        b=s;
    }
    if(c>d){
        s=c;
        c=d;
        d=s;
    }
    if(a>c){
        s=b;
        b=d;
        d=s;
        c=a;
    }
    a=e;
    if(a>b){
        s=a;
        a=b;
        b=s;
    }
    if(c>a){
        s=b;
        b=d;
        d=s;
        a=c;
    }
    if(a>d) cout << d;
    else cout << a;
}