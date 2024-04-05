#include <iostream>
using namespace std;

int main(){
    int n,k,suma,sumb,sumc,m,a,b,c;
    cin >> n >> k;
    if(n%2==1){
        suma=0,sumb=0,sumc=0;
        for(int m=0;m<k;m=m){
            cin >> a >> b >> c;
            if(a==b){
                if(a==b&&a==c){
                    if(a+b>k){
                        suma+=1;
                        sumb+=2;
                        sumc-=3;
                    }
                    else{
                        suma-=3;
                        sumb-=2;
                        sumc+=1;
                    }
                }
                else{
                    suma+=2;
                    sumb-=3;
                }
            }
            m++;
        }
        cout << suma << ' ' << sumb << ' ' << sumc;
    }
    else{
        int s,t;
        cin >> s >> t;
        int x=s,y=t;
        if(s>t) x=s-t;
        else y=2*(t-s);
        if(x+y>k){
            int xx=x;
            x=y;
            y=xx;
            x=y+s*s;
        }
        cout << x << ' ' << y;
    }
}