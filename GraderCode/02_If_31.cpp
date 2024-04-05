#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double d1,m1,d2,m2,day;
    int y1,y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    y1=y1-543;
    y2=y2-543;
    day= (y2-y1-1)*365;
    int feb=28;
    if(y2%4==0) feb=29;
    if(y2%100==0) feb=28;
    if(y2%400==0) feb=29;
    if(m2==1) day=day+d2;
    else if(m2==2) day=day+31+d2;
    else if(m2==3) day=day+31+feb+d2;
    else if(m2==4) day=day+62+feb+d2;
    else if(m2==5) day=day+92+feb+d2;
    else if(m2==6) day=day+123+feb+d2;
    else if(m2==7) day=day+153+feb+d2;
    else if(m2==8) day=day+184+feb+d2;
    else if(m2==9) day=day+215+feb+d2;
    else if(m2==10) day=day+245+feb+d2;
    else if(m2==11) day=day+276+feb+d2;
    else if(m2==12) day=day+306+feb+d2;
    feb=28;
    if(y1%4==0) feb=29;
    if(y1%100==0) feb=28;
    if(y1%400==0) feb=29;
    if(m1==12) day=day+(31-d1);
    else if(m1==11) day=day+(30-d1)+31;
    else if(m1==10) day=day+(31-d1)+61;
    else if(m1==9) day=day+(30-d1)+92;
    else if(m1==8) day=day+(31-d1)+122;
    else if(m1==7) day=day+(31-d1)+153;
    else if(m1==6) day=day+(30-d1)+184;
    else if(m1==5) day=day+(31-d1)+214;
    else if(m1==4) day=day+(30-d1)+245;
    else if(m1==3) day=day+(31-d1)+275;
    else if(m1==2) day=day+(feb-d1)+306;
    else if(m1==1) day=day+(31-d1)+306+feb;
    cout << day << ' ' << round(sin((2.0*M_PI*day)/23.0)*100.0)/100.0 << ' ' << round(sin((2.0*M_PI*day)/28.0)*100.0)/100.0 << ' ' << round(sin((2.0*M_PI*day)/33.0)*100.0)/100.0 ;
}