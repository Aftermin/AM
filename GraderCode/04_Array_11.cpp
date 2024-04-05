#include <iostream>
#include <string>
using namespace std;

int main(){
    string b;
    getline(cin,b);
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    for(int i=0;i<b.length();i++){
        if(b[i]>='0'&&b[i]<='9'){
            a[b[i]-'0']=10;
        }
    }
    int ch1=1,ch2=1;
    for(int i=0;i<10;i++){
        if(a[i]!=10&&ch1){
            cout << i;
            ch1=0;
        }
        else if(a[i]!=10){
            cout << ',' << i;
            ch2=0;
        } 
    }
    if(ch1==1&&ch2==1) cout << "None";
}