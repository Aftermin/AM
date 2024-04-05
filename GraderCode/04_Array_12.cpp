#include <iostream>
#include <string>
using namespace std;

int main(){
    string a[10][2]={"Robert","Dick","William","Bill","James","Jim","John","Jack","Margaret","Peggy","Edward","Ed","Sarah","Sally","Andrew","Andy","Anthony","Tony","Deborah","Debbie"};
    int n,ch=0;
    cin >> n;
    string b;
    for(int i=0;i<n;i++){
        ch=0;
        cin >> b;
        for(int j=0;j<10;j++){
            if(b==a[j][0]){
                cout << a[j][1] << endl;
                ch=1;
            }
            else if(b==a[j][1]){
                cout << a[j][0] << endl;
                ch=1;
            }
            if(ch==0&&j==9) cout << "Not found" << endl;
        }
    }
}