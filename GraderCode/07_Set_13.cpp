#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    set<string> s1,s2;
    string a,b;
    int c=0;
    while(cin >> a >> b){
        if(a.empty()||b.empty()) break;
        s1.insert(a),s2.insert(b);
    }
    for(auto e:s1){
        if(s2.find(e)==s2.end()){
            c++;
            break;
        }
    }
    if(c==0) cout << "None";
    else{
        for(auto e:s1){
            if(s2.find(e)==s2.end()) cout << e << ' ';
        }
    }
}