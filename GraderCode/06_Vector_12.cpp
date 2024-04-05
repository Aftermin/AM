#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> a;
    int b;
    cin >> b;
    a.push_back(b);
    while(1){
        b=a[a.size()-1];
        if(b==1) break;
        if(b%2==0) b=b/2;
        else b=3*b+1;
        a.push_back(b);
    }
    int x=a.size()-15;
    for(int i=max(0,x);i<a.size();i++){
        cout << a[i];
        if(i!=a.size()-1) cout << "->";
    }
}