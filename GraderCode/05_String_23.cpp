#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(){
    string a,c;
    long b;
    cin >> a >> b;
    for(long i=0;i<a.length();i++) if(a[i]!='-') c+=a[i];
    while(b--){
        c[5]+=1;
        if(c[5]>'9'){
            for(long j=c.length()-1;j>=0;j--){
                if((c[j]>'9')&&(j>=3||j==0)){
                    c[j]-=10;
                    c[j-1]+=1;
                }
                else if(c[j]>'Z'){
                    c[j]-=26;
                    c[j-1]+=1;
                }
                else break;
            }
        }
    }
    for(int i=0;i<c.length();i++){
        cout << c[i];
        if(i==2) cout << '-';
    }
}
/*
4XY-999
3000000
*/