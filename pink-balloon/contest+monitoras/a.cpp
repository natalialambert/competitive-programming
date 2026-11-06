#include <bits/stdc++.h>
using namespace std;

int main () {
   int a, b, c, d; 

   cin >> a >> b >> c >> d;

   int r1, r2;

   r1 = a * b;
   r2 = c * d;

   if (r1 == r2) {
    cout << "0" << endl;
   } else if (r1 > r2) {
    cout << "-1" << endl;
   } else {
    cout << "1" << endl;
   }
}