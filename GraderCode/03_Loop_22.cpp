#include <iostream>
using namespace std;

int main(){
    int n,a=1;
    cin >> n;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            if(a==1) a=0;
            else cout <<'*';
            cout << i;
            n=n/i;
            i--;
        }
    }
}