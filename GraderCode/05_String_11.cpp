#include <iostream>
#include <string>
using namespace std;

int main(){
    char a;
    string s;
    while(getline(cin,s)){
        if(s.empty()) break;
        a=s[s.length()-1];
        for(int i=0;i<s.length();i++){
            if(s[i]==a){
                for(int j=i+1;j<s.length();j++){
                    if(s[j]==a){
                        i=j;
                        break;
                    }
                    else cout << s[j];
                }
            }
        }
        cout << endl;
    }
}