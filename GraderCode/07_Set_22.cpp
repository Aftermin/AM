#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

vector<int> cut(string s) {
    vector<int> a;
    int c;
    string b;
    s += " ";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            c = stoi(b);
            a.push_back(c);
            b = "";
        } else b += s[i];
    }
    return a;
}

int main() {
    vector<int> v;
    set<int> un, f, in, di;
    string s;
    int t = 0;
    while (getline(cin, s)) {
        v.clear();
        f.clear();
        v = cut(s);
        if (t == 0) {
            un.insert(v.begin(), v.end());
            in.insert(v.begin(), v.end());
            di.insert(v.begin(), v.end());
            t = 1;
            continue;
        }
        un.insert(v.begin(), v.end());
        f.insert(v.begin(), v.end());

        for (auto itr = in.begin(); itr != in.end();) {
            if (f.find(*itr) == f.end()) {
                itr = in.erase(itr);
            } else {
                ++itr;
            }
        }

        for (auto itr = di.begin(); itr != di.end();) {
            if (f.find(*itr) != f.end()) {
                itr = di.erase(itr);
            } else {
                ++itr;
            }
        }
    }

    cout << "U: ";
    if (un.empty()) cout << "empty set";
    else {
        for (auto e : un) {
            cout << e << ' ';
        }
    }
    cout << endl << "I: ";
    if (in.empty()) cout << "empty set";
    else {
        for (auto e : in) {
            cout << e << ' ';
        }
    }
    cout << endl << "D: ";
    if (di.empty()) cout << "empty set";
    else {
        for (auto e : di) {
            cout << e << ' ';
        }
    }

    return 0;
}