#include <iostream>
#include <vector>
#include <cmath>
#include <tuple>
#include <algorithm>
using namespace std;


int main(){
    int c=1,n;
    double x,y,z;
    cin >> n;
    vector< tuple<double,int,double,double> > a;
    while(n--){
        cin >> x >> y;
        z=sqrt(pow(x,2)+pow(y,2));
        a.push_back(make_tuple(z,c,x,y));
        c++;
    }
    sort(a.begin(),a.end());
    cout << '#' << get<1>(a[2]) << ": (" << get<2>(a[2]) << ", " << get<3>(a[2]) << ')';
}