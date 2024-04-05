#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double xm,ym,xe,ye,re,rp,a,b,c;
    cin >> xe >> ye >> re >> rp >> xm >> ym;
    c=sqrt(pow(xm-xe,2)+pow(ym-ye,2));
    a=xe+((xm-xe)*(re-rp))/c;
    b=ye+((ym-ye)*(re-rp))/c;
    cout << round(a) << ' ' << round(b);
}