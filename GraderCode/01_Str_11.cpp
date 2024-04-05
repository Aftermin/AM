#include <iostream>
using namespace std;

int main(){
    int sum=0,cn=0;
    string a;
    cin >> a;
    for(int i=13;i>=2;i--){
        sum=sum+i*(a[cn]-48);
        cn++;
    }
    int ans=(11-sum%11)%10;
    for(int i=0;i<a.length();i++){
        if(i==1||i==5||i==10) cout << '-';
        cout << a[i];
    }
    cout << '-' << ans;
}