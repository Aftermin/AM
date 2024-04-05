#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

int main(){
    map< string,vector<string> > m;
    string a,b;
    while(cin >> a >> b){
        m[a].push_back(b);
        m[b].push_back(a);
    }
    cin >> a;
    m[a].push_back(a);
    set<string> s;
    for(int i=0;i<m[a].size();i++){
        s.insert(m[a][i]);
        for(int j=0;j<m[m[a][i]].size();j++){
            s.insert(m[m[a][i]][j]);
        }
    }
    for(auto e:s){
        cout << e << endl;
    }
}