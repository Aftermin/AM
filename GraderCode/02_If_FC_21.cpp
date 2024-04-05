#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,s;
    cin >> a >> b >> c >> d;
    if(a>b){
        s=a;
        a=b;
        b=s;
        if(d<a) c=c+a;
        else if(c>d) c=c-a;
        b=a+c+d;
    }
    else{
        if(c>a&&a>=b) d=d+a;
        if(d>c) b=b+2;
        else b=b*2;
    }
    cout << a << ' ' << b << ' ' << c << ' ' << d;
}