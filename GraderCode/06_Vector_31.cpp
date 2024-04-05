#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

vector< pair<char,int> > cut(string s){
    string t,u;
    int a;
    char c;
    s+=" ";
    vector< pair<char,int> > caller;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            c=t[0];
            for(int j=1;j<t.length();j++){
                u+=t[j];
            }
            a=stoi(u);
            caller.push_back(make_pair(c,a));
            u="",t="";
        }
        else t+=s[i];
    }
    return caller;
}

int main(){
    string s;
    getline(cin,s);
    vector< pair<char,int> > v1,v;
    int n=5;
    int a[n][n],acopy[n][n];
    a[2][2]=-1,acopy[2][2]=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==2&&j==2){
                cin >> s;
                continue;
            }
            cin >> a[i][j];
            acopy[i][j]=a[i][j];
        }
    }
    cin.ignore();
    while(getline(cin,s)){
        if(s.empty()) break;
        v1=cut(s);
        for(int i=0;i<v1.size();i++){
            v.push_back(v1[i]);
        }
    }
    int k=0,cn1=0,cn2=0,ans=0,ans1=0;
    for(int i=0;i<v.size();i++){
        if(v[i].first=='B') k=0;
        else if(v[i].first=='I') k=1;
        else if(v[i].first=='N') k=2;
        else if(v[i].first=='G') k=3;
        else if(v[i].first=='O') k=4;
        for(int j=0;j<n;j++){
            if(a[j][k]==v[i].second){
                a[j][k]=-1;
                break;
            }
        }
        for(int j=0;j<n;j++){
            cn1=0,cn2=0;
            for(int k=0;k<n;k++){
                if(a[j][k]==-1) cn1++;
                if(a[k][j]==-1) cn2++;
            }
            if(cn1==5||cn2==5){
                ans1=j;
                ans=i+1;
                break;
            }
        }
        if(cn1==5||cn2==5) break;
    }
    cout << ans << endl;
    if(cn1==5){
        if(ans1==2){
            cout << "B" << acopy[ans1][0] <<", I" << acopy[ans1][1]
            << ", G" << acopy[ans1][3] << ", O" << acopy[ans1][4] << endl;
        }
        else cout << "B" << acopy[ans1][0] <<", I" << acopy[ans1][1]<< ", N" << acopy[ans1][2]
        << ", G" << acopy[ans1][3] << ", O" << acopy[ans1][4] << endl;
    }
    if(cn2==5){
        char h;
        if(ans1==0) h='B';
        else if(ans1==1) h='I';
        else if(ans1==2) h='N';
        else if(ans1==3) h='G';
        else if(ans1==4) h='O';
        if(ans1==2){
            cout << h << acopy[0][ans1] << ", " << h << acopy[1][ans1]
        << ", " << h << acopy[3][ans1] << ", " << h << acopy[4][ans1] << endl;
        }
        else cout << h << acopy[0][ans1] << ", " << h << acopy[1][ans1]<< ", " << h << acopy[2][ans1]
        << ", " << h << acopy[3][ans1] << ", " << h << acopy[4][ans1] << endl;
    }
}