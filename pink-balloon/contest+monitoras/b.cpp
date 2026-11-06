#include <bits/stdc++.h>
using namespace std;

int main () {
   int a, b, c;

    cin >> a >> b >> c;

    int d = a - (b + c);

    cout << max(d, max(b, c)) << endl;
}