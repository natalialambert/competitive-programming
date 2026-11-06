#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, s; cin >> n;
    int impar = 0;
    int par = 0;

    for (int i = 0; i < n; i++) {
        cin >> s;
        if (i % 2 == 0) {
            par += s;
        } else {
            impar += s;
        }
    } 

    //if (par > impar) {
    //    cout << par << endl;
    //} else {
    //    cout << impar << endl;
    //}

    cout << max(par, impar) << endl;
}