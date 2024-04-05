#include <iostream>
using namespace std;

int main(){
    int d,m,y;
    cin >> d >> m >> y;
    y = y-543;
    int feb=28;
    if(y%4==0) feb=29;
    if(y%100==0) feb=28;
    if(y%400==0) feb=29;
    if(m==1) cout << d;
    else if(m==2) cout << 31+d;
    else if(m==3) cout << 31+feb+d;
    else if(m==4) cout << 62+feb+d;
    else if(m==5) cout << 92+feb+d;
    else if(m==6) cout << 123+feb+d;
    else if(m==7) cout << 153+feb+d;
    else if(m==8) cout << 184+feb+d;
    else if(m==9) cout << 215+feb+d;
    else if(m==10) cout << 245+feb+d;
    else if(m==11) cout << 276+feb+d;
    else if(m==12) cout << 306+feb+d;
}