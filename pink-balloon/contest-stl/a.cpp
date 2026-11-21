#include <bits/stdc++.h>
using namespace std;

int main (){
    int x; cin >> x;
    int n, c, f;

    for (int i = 0; i < x; i++) {
        cin >> n;
        cin >> c;
        int aux = 0;

        for (int k = 0; k < n; k++) {
            cin >> f;
            if (f == c) {
                aux = 1;
            }
        }

        if (aux == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
