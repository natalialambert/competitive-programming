#include <bits/stdc++.h>
using namespace std;

//tem que finalizar

int main (){
    int n, c, aux = 0;

    cin >> n;
    cin >> c;

    vector<int> v(n);
        
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        if (v[i] >= v[k - 1] && v[i] > 0) {
            aux++;
        }
    }

    cout << aux << endl;
    
}
