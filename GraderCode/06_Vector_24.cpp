#include "bits/stdc++.h"
using namespace std;

vector<string> cut(string x){
    vector<string> a;
    string y;
    x+=" ";
    for(int i=0;i<x.length();i++){
        if(x[i]==' '){
            a.push_back(y);
            y="";
        }
        else y+=x[i];
    }
    return a;
}
int main(){
    vector< pair< float,pair< string,float > > > a;
    string x;
    float y;
    int t=0;
    while(1){
        cin >> x;
        if(x=="END") break;
        cin >> y;
        a.push_back(make_pair(0,make_pair(x,y)));
        t++;
    }
    cin.ignore();
    vector<string> b;
    getline(cin,x);
    b=cut(x);
    sort(b.begin(),b.end());
    for(int i=0;i<b.size();i++){
        for(int j=0;j<a.size();j++){
            if(b[i]==a[j].second.first){
                a[j].first-=a[j].second.second;
                break;
            }
        }
    }
    sort(a.begin(),a.end());
    for(int i=0;i<3;i++){
        if(a[0].first==0){
            cout << "No Sales";
            break;
        }
        if(a[i].first==0) break;
        cout << a[i].second.first << ' ' << -1*a[i].first << endl;
    }
}