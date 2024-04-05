#include <iostream>
using namespace std;

int main(){
    int y;
    cin >> y;
    y=(y-543)%100;
    int x=(y+y/4+11)%7;
    cout << x;
}