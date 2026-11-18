#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int ones = 0;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        if (val == 1) {
            ones++;
        }
    }
    if (ones == 0) {
        cout << "Elsie\n";
    }
    else if (n % 2 == 0) {
        cout << "Bessie\n";
    }
    else {
        if (ones >= 2) {
            cout << "Bessie\n";
        } else {
            cout << "Elsie\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}