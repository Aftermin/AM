#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    double a,b,a1,a2,a3;
    cin >> a >> b;
    a1=(sqrt(a*b))/60;
    cout << setprecision(15) << a1 << endl;
    a2=(0.024265*pow(a,0.5378)*pow(b,0.3964));
    cout << setprecision(15) << a2 << endl;
    a3=(0.0333*pow(a,0.6157-0.0188*log10(a))*pow(b,0.3));
    cout << a3;
}