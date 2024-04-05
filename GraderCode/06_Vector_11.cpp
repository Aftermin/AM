#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a;
    vector<int> b;
    int n,d;
    cin >> n;
    while(1){
        cin >> d;
        if(d==-1) break;
        a.push_back(d);
    }
    for(int i=0;i<a.size();i++){
        if(i%2==0) b.push_back(a[i]);
        else b.insert(b.begin(),a[i]);
    }
    cout << '[';
    for(int i=0;i<b.size();i++){
        cout << b[i];
        if(i!=b.size()-1) cout << ", ";
    }
    cout << ']';
}