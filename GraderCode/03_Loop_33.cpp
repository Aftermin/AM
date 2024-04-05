#include <iostream>
using namespace std;

int main(){
    int x=1,min1=1000000,max1=-1000000,min2=1000000,max2=-1000000,a,b,c,d,ch=0;
    while(1){
        if(x%2==0){
            cin >> c;
            if(c==-998||c==-999) ch=1;
            else{
                cin >> d;
                if(c>max1) max1=c;
                if(d<min1) min1=d;
                if(c<min2) min2=c;
                if(d>max2) max2=d;
            }
        }
        else if(x%2==1){
            cin >> a;
            if(a==-998||a==-999) ch=1;
            else{
                cin >> b;
                if(a<min1) min1=a;
                if(b>max1) max1=b;
                if(a>max2) max2=a;
                if(b<min2) min2=b;
            }
        }
        if(ch){
            if(a==-998||c==-998) cout << min1 << ' ' << max1;
            else if(a==-999||c==-999) cout << min2 << ' ' << max2;
            break;
        }
        x++;
    }
}
/*
-10 10
20 -20
-30 30
-998
*/