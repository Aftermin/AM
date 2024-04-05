#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a==0) cout << "zero" << endl << "even";
    if(a>0){
        cout << "positive" << endl ;
        if(a%2==0) cout << "even";
        else cout << "odd";
    }
    if(a<0){
        cout << "negative" << endl ;
        if(a%2==0) cout << "even";
        else cout << "odd";
    }
}