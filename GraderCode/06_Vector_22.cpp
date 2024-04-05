#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

vector<int> cut(string s){
    vector<int> a;
    int c;
    string b;
    s+=" ";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            c=stoi(b);
            a.push_back(c);
            b="";
        }
        else b+=s[i];
    }
    return a;
}

int main(){
    string s;
    getline(cin,s);
    vector<int> a;
    a=cut(s);
    a.push_back(10000000);
    vector< pair<int,pair<int,int> > > b;
    int c=1;
    for(int i=1;i<a.size();i++){
        if(a[i]!=a[i-1]){
            b.push_back(make_pair((-1)*c,make_pair(a[i-1],i)));
            c=1;
        }
        else c++;
    }
    sort(b.begin(),b.end());
    for(int i=0;i<b.size();i++){
        cout << b[i].second.first << " --> x[ " << b[i].second.second-b[i].first*(-1) << " : " <<  b[i].second.second << " ]" << endl;
        if(b[i+1].first!=b[i].first) break;
    }
}