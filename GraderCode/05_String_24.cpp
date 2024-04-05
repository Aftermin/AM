#include <iostream>
#include <string>
using namespace std;

int main(){
    int last=0;
    string a,b,c;
    getline(cin,a);
    for(int i=0;i<a.length();i++) if(a[i]==' ') last=i+1;
    for(int i=last+1;i<a.length();i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            for(int j=i;j<a.length();j++) c=c+a[j];
            last=i;
            break;
        }
    }
    for(int i=0;i<a.length();i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            for(int j=i;j<a.length();j++){
                if(a[j]!=' ') b=b+a[j];
                else break;
            }
            break;
        }
    }
    int ch1=1;
    for(int i=0;i<a.length();i++){
        if(i==last){
            cout << b;
            break;
        }
        cout << a[i];
        if(ch1&&(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u')){
            cout << c;
            i+=b.length();
            ch1=0;
        }
    }
}