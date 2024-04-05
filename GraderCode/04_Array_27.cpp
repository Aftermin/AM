#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int m;
    cin >> m;
    int a1[m],a2[m];
    for(int i=0;i<m;i++){
        if(i%2==0) cin >> a1[i] >> a2[i];
        else if(i%2==1) cin >> a2[i] >> a1[i];
    }
    sort(a1,a1+m);
    sort(a2,a2+m);
    string s;
    cin >> s;
    if(s=="Zig-Zag") cout << a1[0] << ' ' << a2[m-1];
    else if(s=="Zag-Zig") cout << a2[0] << ' ' << a1[m-1];
}