#include <iostream>
#include <math.h>
#include <string>
using namespace std;

long gcd(long a,long b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    string a,b,c;
    cin >> a >> b >> c;
    long na,nb,nc;
    na=a.length();
    nb=b.length();
    nc=c.length();
    long x1,x2;
    string s1,s2;
    s1=a+b+c;
    s2=a+b;
    x1=stoi(s1);
    x2=stoi(s2);
    long long int ans1=x1-x2,ans2=(pow(10,nb+nc)-pow(10,nb));
    long ans =gcd(ans1,ans2);
    cout << ans1/ans << " / " << ans2/ans;
}