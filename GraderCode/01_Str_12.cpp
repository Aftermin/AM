#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cin >> a;
    if(a[3]=='0'){
        if(a[4]=='1') cout << "JAN";
        else if(a[4]=='2') cout << "FEB";
        else if(a[4]=='3') cout << "MAR";
        else if(a[4]=='4') cout << "APR";
        else if(a[4]=='5') cout << "MAY";
        else if(a[4]=='6') cout << "JUN";
        else if(a[4]=='7') cout << "JUL";
        else if(a[4]=='8') cout << "AUG";
        else if(a[4]=='9') cout << "SEP";
    }
    else if(a[3]=='1'){
        if(a[4]=='0') cout << "OCT";
        else if(a[4]=='1') cout << "NOV";
        else if(a[4]=='2') cout << "DEC";
    }
    if(a[0]=='0') cout << ' ' << a[1] << ',';
    else cout << ' ' << a[0] << a[1] << ',';
    int year = (a[6]-48)*1000+(a[7]-48)*100+(a[8]-48)*10+(a[9]-48)-543;
    cout << ' ' << year;
}