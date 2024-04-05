#include <iostream>
#include <vector>
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
    vector<pair<string,string> > a;
    string x,y,z;
    while(1){
        cin >> x;
        if(x=="q") break;
        cin >> y;
        a.push_back(make_pair(x, y));
    }
    cin.ignore();
    getline(cin,z);
    vector<string> b;
    b=cut(z);
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i].first==b[j]){
                if(a[i].second=="F"){
                    a[i].second="D";
                    break;
                } 
                else if(a[i].second=="D"){
                    a[i].second="D+";
                    break;
                }
                else if(a[i].second=="D+"){
                    a[i].second="C";
                    break;
                } 
                else if(a[i].second=="C"){
                    a[i].second="C+";
                    break;
                } 
                else if(a[i].second=="C+"){
                    a[i].second="B";
                    break;
                } 
                else if(a[i].second=="B"){
                    a[i].second="B+";
                    break;
                } 
                else if(a[i].second=="B+"){
                    a[i].second="A";
                    break;
                } 
            }
        }
        cout << a[i].first << ' ' << a[i].second << endl;
    }
}