#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;
    int a,count=0;
    while(cin >> a){
        if(s.find(a)==s.end()){
            s.insert(a);
            count++;
        }
        else{
            cout << count+1;
            return 0;
        }
    }
    cout << "-1";
}