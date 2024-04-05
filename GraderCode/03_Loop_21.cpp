#include <iostream>
using namespace std;

int main(){
    string a;
    while(cin >> a){
        int c1=1,C1=1,c0=1,cc=1;
        for(int i=0;i<a.length();i++){
            if(a[i]>='a'&&a[i]<='z')c1=0;
            else if(a[i]>='A'&&a[i]<='Z') C1=0;
            else if(a[i]>='0'&&a[i]<='9') c0=0;
            else if(cc) cc=0;
        }
        if(a.length()>=12&&c1==0&&C1==0&&c0==0&&cc==0) cout << ">> strong" << endl;
        else if(a.length()>=8&&c1==0&&C1==0&&c0==0) cout << ">> weak" << endl;
        else cout << ">> invalid" << endl;
    }
}