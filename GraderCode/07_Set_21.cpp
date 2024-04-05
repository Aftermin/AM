#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;
    int a,b,c=0,d;
    cin >> b;
    while(cin >> a){
        if(a>b) continue;
        s.insert(a);
    }
    for(auto e:s){
        d=b-e;
        if(b==d) continue;
        if(2*e==b) continue;
        if(s.find(d)!=s.end()){
            s.erase(d);
            c++;
        }
    }
    cout << c;
}