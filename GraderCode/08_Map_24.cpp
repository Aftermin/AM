#include <iostream>
#include <map>
using namespace std;

int main(){
    int t;
    cin >> t;
    string n;
    float p,ans=0,top=0;
    map< string,pair<float,float> > m;
    while(t--){
        cin >> n >> p;
        m[n]=make_pair(p,0);
    }
    cin >> t;
    while(t--){
        cin >> n >> p;
        if(m.find(n)==m.end()) continue;
        ans+=m[n].first*p;
        m[n].second+=m[n].first*p;
    }
    if(ans==0){
        cout << "No ice cream sales";
        return 0;
    }
    for(auto &e:m){
        if(e.second.second>top) top=e.second.second;
    }
    cout << "Total ice cream sales: " << ans << endl;
    cout << "Top sales: ";
    for(auto &e:m){
        if(e.second.second==top) cout << e.first << ' ';
    }
}