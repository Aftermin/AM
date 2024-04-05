#include <iostream>
using namespace std;

int main(){
    string a[10]={"zero ", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine "}; 
    string b[10]={" ","eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string c[10]={" ","ten","twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string x;
    cin >> x;
    if(x.length()==1) cout << a[x[0]-48];
    else if(x.length()==2&&x[1]=='0') cout << c[x[0]-48];
    else if(x.length()==2&&x[0]=='1') cout << b[x[1]-48];
    else{
        for(int i=0;i<x.length();i++){
            if(x[i]=='0') continue;
            for(int j=0;j<10;j++){
                if(x[i]-48==j) cout << a[j];
            }
            if(x.length()-i==13) cout << "trillion ";
            else if(x.length()-i==10) cout << "billion ";
        }
    }
    
    
}