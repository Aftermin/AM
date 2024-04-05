#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> a;
    string n, m;
    
    getline(cin, n);
    n += ' '; 

    for(int i = 0; i < n.length(); i++){
        if (n[i] == ' ') {
            int x = stoi(m);
            a.push_back(x);
            m = "";
        } else {
            m += n[i];
        }
    }

    int count = 1;
    sort(a.begin(), a.end());

    for (int i = 1; i < a.size(); i++) {
        if (a[i] != a[i - 1]) count++;
    }

    cout << count << endl;

    count = 10;

    for (int i = 0; i < a.size(); i++) {
        if (count == 0) break;
        if (i == 0 || a[i] != a[i - 1]) {
            cout << a[i] << ' ';
            count--;
        }
    }

    return 0;
}
