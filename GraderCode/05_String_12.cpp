#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b;
    for(int i=0;i<1000;i++) a=a+'0';
    while(1){
        cin >> b;
        int j=999;
        if(b=="END") break;
        for(int i=b.length()-1;i>=0;i--){
            a[j]=a[j]+(b[i]-'0');
            for(int k=j;k>=0;k--){
                if(a[k]>'9'||a[k]<'0'){
                    a[k-1]=a[k-1]+1;
                    a[k]=a[k]-10;
                }
                else break;
            }
            j--;
        }
    }
    int c=0;
    for(int i=0;i<a.length();i++){
        if(a[i]!='0'||c){
            c=1;
            cout << a[i];
        }
    }
}