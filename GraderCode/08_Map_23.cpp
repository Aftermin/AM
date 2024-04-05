#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    map< string,pair<int,int> > m;
    int minite,sec,j;
    string a,b,s,time,time1;
    while(cin >> a >> b >> s >> time){
        time1="";
        for(int i=0;i<time.length();i++){
            if(time[i]!=':') time1+=time[i];
            else{
                j=i;
                minite=stoi(time1);
                time1="";
                break;
            }
        }
        for(int i=j+1;i<time.length();i++){
            time1+=time[i];
            if(i==time.length()-1){
                sec=stoi(time1);
            }
        }
        if(m.find(s)==m.end()) m[s]=make_pair(minite,sec);
        else{
            m[s].first+=minite;
            m[s].second+=sec;
            if(m[s].second>=60){
                m[s].second-=60;
                m[s].first+=1;
            }
        }
    }
    map< int,pair<int,string> > ans;
    for(auto &e:m){
        ans[e.second.first]=make_pair(e.second.second,e.first);
    }
    j=0;
    for(auto itr=ans.end(),f=ans.begin();itr!=f&&j!=3;){
        j++;
        auto &e=*(--itr);
        cout << e.second.second << " --> " << e.first << ':' << e.second.first << endl;
    }
}