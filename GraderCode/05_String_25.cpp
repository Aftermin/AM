#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(){
    int x;
    string a,b,c;
    while(cin >> a >> b){
        c="";
        if(b.length()<=4) x=stoi(b);
        else{
            for(int i=b.length()-4;i<b.length();i++) c+=b[i];
            x=stoi(c);
        }
        if(b=="0") cout << ">> " << 1 << endl;
        else if(a[a.length()-1]=='0') cout << ">> " << 0 << endl;
        else if(a[a.length()-1]=='1') cout << ">> " << 1 << endl;
        else if(a[a.length()-1]=='2'){
            if(x%4==0) cout << ">> " << 6 << endl;
            else if(x%4==1) cout << ">> " << 2 << endl;
            else if(x%4==2) cout << ">> " << 4 << endl;
            else if(x%4==3) cout << ">> " << 8 << endl;
        }
        else if(a[a.length()-1]=='3'){
            if(x%4==0) cout << ">> " << 1 << endl;
            else if(x%4==1) cout << ">> " << 3 << endl;
            else if(x%4==2) cout << ">> " << 9 << endl;
            else if(x%4==3) cout << ">> " << 7 << endl;
        }
        else if(a[a.length()-1]=='4'){
            if(x%2==0) cout << ">> " << 6 << endl;
            else if(x%2==1) cout << ">> " << 4 << endl;
        }
        else if(a[a.length()-1]=='5') cout << ">> " << 5 << endl;
        else if(a[a.length()-1]=='6') cout << ">> " << 6 << endl;
        else if(a[a.length()-1]=='7'){
            if(x%4==0) cout << ">> " << 1 << endl;
            else if(x%4==1) cout << ">> " << 7 << endl;
            else if(x%4==2) cout << ">> " << 9 << endl;
            else if(x%4==3) cout << ">> " << 3 << endl;
        }
        else if(a[a.length()-1]=='8'){
            if(x%4==0) cout << ">> " << 6 << endl;
            else if(x%4==1) cout << ">> " << 8 << endl;
            else if(x%4==2) cout << ">> " << 4 << endl;
            else if(x%4==3) cout << ">> " << 2 << endl;
        }
        else if(a[a.length()-1]=='9'){
            if(x%2==0) cout << ">> " << 1 << endl;
            else if(x%2==1) cout << ">> " << 9 << endl;
        }
    }
}