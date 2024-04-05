#include <iostream>
#include <vector>
using namespace std;

vector<string> split(string line, char delimiter) {
    vector<string> a;
    line+=delimiter;
    string b="";
    for(char c:line){
        if(c==delimiter){
            if(b!=""){
                a.push_back(b);
            }
            b="";
        }
        else b+=c;
    }
    return a;
}

int main() {
    string line;
    getline(cin, line);
    string delim;
    getline(cin, delim);
    for (string e : split(line, delim[0])) {
        cout << '(' << e << ')';
    }
}