#include <iostream>
using namespace std;

int main(){
    string n1,n2;
    float g1,g2;
    int ch1=0,ch2=0;
    char cp1,cp2,c11,c12,c21,c22;
    cin >> n1 >> g1 >> cp1 >> c11 >> c21;
    cin >> n2 >> g2 >> cp2 >> c12 >> c22;
    if(cp1=='A'&&(c11=='A'||c11=='B'||c11=='C')&&(c21=='A'||c21=='B'||c21=='C')) ch1=1;
    if(cp2=='A'&&(c12=='A'||c12=='B'||c12=='C')&&(c22=='A'||c22=='B'||c22=='C')) ch2=1;
    if(ch1==1&&ch2==1){
        if(g1>g2) cout << n1;
        else if(g1<g2) cout << n2;
        else if(g1==g2){
            if(c11<c12) cout << n1;
            else if(c11>c12) cout << n2;
            else if(c11==c12){
                if(c21<c22) cout << n1;
                else if(c21>c22) cout << n2;
                else cout << "Both";
            }
        }
    }
    else if(ch1==1&&ch2!=1) cout << n1;
    else if(ch2==1&&ch1!=1) cout << n2;
    else cout << "None";
}