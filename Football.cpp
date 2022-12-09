#include <iostream>
using namespace std;

int main() {
    int a = 1;
    string s;
    cin >> s;
    for (int i = 1; i <= s.length(); i++) {
        if (a >= 7) {
            cout << "YES";
            break;
        }
        if (s[i] == s[i-1]) {
            a++;
        } else {
            a = 1;
        }
    }
    if (a < 7) {
        cout << "NO";
    }
}