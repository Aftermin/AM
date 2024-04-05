#include <iostream>
using namespace std;

int main(){
    int a,c1=1;
    string b;
    cin >> b;
    cin >> a;
    for(int i=0;i<b.length();i++){
        if(b[i]==b[i+1]) c1++;
        else{
            if(c1<a){
                for(int j=0;j<c1;j++){
                    cout << b[i];
                }
            }
            c1=1;
        }
    }
}