#include <iostream>
#include <string>
using namespace std;

int main(){
    long long int a,b,count=0;
    string ans;
    cin >> a >> b;
    for(long long int i=a;i<=b;i++){
        ans=to_string(i);
        count=count+ans.length();
    }
    cout << count;
}

/*
#include <iostream>
using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;
    long long int ans = 0;
    for (int i = 1; i <= 18; i++) {
        long long c = 1;
        for (int j = 1; j < i; j++) {
            c = c*10;
        }
        if (c <= n) {
            ans = ans+min(max(n - c + 1, 0LL), n - m + 1);
        }
    }
    if(m==0) ans++;
    cout << ans << endl;
}
*/