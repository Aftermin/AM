#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string a[n],aa[n],b;
    for(int i=0;i<n;i++){
        cin >> a[i];
        cin.ignore();
    }
    getline(cin,b);
    for(int i=0;i<b.length();i++){
        if(b[i]=='C'){
            for(int j=0;j<n/2;j++){
                aa[j+n/2]=a[j];
            }
            for(int j=n/2;j<n;j++){
                aa[j-n/2]=a[j];
            }
        }
        else if(b[i]=='S'){
            for(int j=0;j<n;j++){
                if(j%2==0) aa[j]=a[j/2];
                else if(j%2==1) aa[j]=a[n/2+(j-1)/2];
            }
        }
        if(b[i]=='S'||b[i]=='C'){
            for(int j=0;j<n;j++){
                a[j]=aa[j];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << a[i] << ' ';
    }
}