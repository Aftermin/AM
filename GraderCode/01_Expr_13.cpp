#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a,b,c,x1,x2;
    cin >> a >> b >> c;
    x1=((-1)*(b)-sqrt((b)*(b)-4*(a)*(c)))/(2*a);
    x2=((-1)*(b)+sqrt((b)*(b)-4*(a)*(c)))/(2*a);
    cout << round(x1*1e3)/1e3 << ' ' << round(x2*1e3)/1e3;
}
/*
input 
6
-4.0
-12
output
-1.12 1.786
*/