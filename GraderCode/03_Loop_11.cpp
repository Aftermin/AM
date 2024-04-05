#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float sum=0,x,i;
    for(i=1;i<100000;i++){
        cin >> x;
        if(x==-1) break;
        sum = sum+x;
    }
    if(sum==0) cout << "No Data";
    else{
        sum=sum/(i-1);
        cout << round(sum*100)/100;
    }
}