#include <bits/stdc++.h>
using namespace std;

int main () {
   int a, b, c;

    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "empate" << endl;
    } else if (b == c && a != b) {
        cout << "A" << endl;
    } else if (a == c && b != a) {
        cout << "B" << endl;
    } else {
        cout << "C" << endl;
    } 

}