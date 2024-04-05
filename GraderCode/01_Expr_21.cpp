#include <iostream>
using namespace std;

int main(){
    int hb,mb,sb,ha,ma,sa;
    cin >> hb >> mb >> sb;
    cin >> ha >> ma >> sa;
    int a1= hb*60*60+mb*60+sb;
    int a2= ha*60*60+ma*60+sa;
    int ans= a2-a1;
    int sec=((24*60*60)+(a2-a1))%(24*60*60);
    int hour=sec/(60*60);
    int minite=(sec-(hour*60*60))/60;
    cout << hour << ':' << minite << ':' << sec%60; 
}
/*
2 10 20           
4 0 0
*/