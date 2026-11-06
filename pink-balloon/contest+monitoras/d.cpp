#include <bits/stdc++.h>
using namespace std;

int main () {
   string s; cin >> s;
   
   if (s.size() >= 4 && s.size() <= 20) {
    string aux = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'A') {
            aux += '4';
        } else if (s[i] == 'o' || s[i] == 'O') {
            aux += '0';
        } else if (s[i] == 'e' || s[i] == 'E') {
            aux += '3';
        } else if (s[i] == 's' || s[i] == 'S') {
            aux += '$';
        } else {
            aux += s[i];
        }
    }
    cout << aux << endl;
    } else {
    cout << s << " com tamanho incorreto: " << s.size() << endl;
   }
}