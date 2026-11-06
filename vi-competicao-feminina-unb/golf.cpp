#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, a, b; 
    int A = 0;
    int B = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        A += a;
    }

    for (int i = 0; i < n; i++) {
        cin >> b;
        B += b;
    }

    if (A > B) {
        cout << "Bianca" << endl;
    } else if (A < B) {
        cout << "Ana" << endl;
    } else {
        cout << "Empate" << endl;
    }
}