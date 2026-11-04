#include <bits/stdc++.h>
using namespace std;

//nao foi finalizad

int main () {
  int n, aux = 0; cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < n - 1; i++) {
    if (v[i] == v[i+1]) {
      aux++;
    }
  }

  if (aux % 2 == 0) {
    cout << "preta" << endl;
  } else {
    cout << "branca" << endl;
  }

}