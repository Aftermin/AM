#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,min=0,x,c=35;
    cin >> a;
    x=a;
    while(c--){
        if(pow(10,(x+min)/2)>=a) x=(min+x)/2;
        else if(pow(10,(x+min)/2)<=a) min=(min+x)/2;
    }
    cout << x;
}
//2.91038e-11