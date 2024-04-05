#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x,y;
    cin >> x;
    y=(pow(x,sqrt(2*log(x+1))))/(10-x);
    cout << round(y*1e6)/1e6;
}