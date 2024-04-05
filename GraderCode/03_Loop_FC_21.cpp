#include <iostream>
using namespace std;

int main(){
    float p,k=1,t=1;
    cin >> p;
    while(1){
        t=(t*(365-(k-1)))/365;
        if(1-t>=p) break;
        k++;
    }
    cout << k;
}