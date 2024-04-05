#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float max,min,a,b,c,d;
    cin >> a >> b >> c >> d;
    max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    if(d>max) max=d;
    min =a;
    if(b<min) min=b;
    if(c<min) min=c;
    if(d<min) min=d;
    cout << round(((a+b+c+d-min-max)/2.0)*100.0)/100.0;
}
/*
9.84 9.30 9.42 9.58
*/