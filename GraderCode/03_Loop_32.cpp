#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,point=0,ch=0;
    cin >> n; cin.ignore();
    while(n--){
        int m=0,c1=0,c2=0,c3=0,c4=0;
        string x,a,b="YGNBPK";
        getline(cin,x);
        for(int i=0;i<x.length();i++){
            if(x[i]!=' ') a=a+x[i]; //-> with out spacebar
        }
        for(int i=0;i<a.length();i++){
            if(a[i]=='R'){
                m=i; 
                c2++;
            } 
            if(i%2==0&&a[i]=='R') c1++;
        }
        if(m+1==a.length()){
            for(int i=0;i<a.length()-1;i++){
                if(i%2==0&&a[i]!='R'){
                    c4=1;
                    break;
                }
            }
        }
        int d=0;
        for(int i=m+2;i<a.length();i++){
            if(a[i]==b[d]) c3++;
            d++;
        }
        if(a[0]!='R') cout << "WRONG_INPUT" << endl;
        else if(c1!=c2) cout << "WRONG_INPUT" << endl;
        else if(m+8<a.length()) cout << "WRONG_INPUT" << endl;
        else if(c3!=a.length()-m-2&&d!=0) cout << "WRONG_INPUT" << endl;
        else if(c4==1) cout << "WRONG_INPUT" << endl;
        else{
            point =0;
            for(int i=0;i<a.length();i++){
                if(a[i]=='R') point=point+1;
                else if(a[i]=='Y') point=point+2;
                else if(a[i]=='G') point=point+3;
                else if(a[i]=='N') point=point+4;
                else if(a[i]=='B') point=point+5;
                else if(a[i]=='P') point=point+6;
                else if(a[i]=='K') point=point+7;
            }
            cout << point << endl;
        }
    }
}