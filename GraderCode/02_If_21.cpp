#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long double a;
    cin >> a;
    if(a<1000) cout << a;
    else if(a<1000000){
        if(a<10000) cout << round(a/100)/10 << 'K';
        else cout << round(a/1000) << 'K';
    }
    else if(a<1000000000){
        if(a<10000000) cout << round(a/100000)/10 << 'M';
        else cout << round(a/1000000) << 'M';
    }
    else{
        if(a<10000000000) cout << round(a/100000000)/10 << 'B';
        else cout << round(a/1000000000) << 'B';
    }
}