#include <bits/stdc++.h>
using namespace std;

// --- SOLUTION FUNCTION ---
void solve() {
    int a, b, x;
    cin >> a >> b >> x;
    int ans = 1e9, cnt = 0;
    while(a != b){
        if(a > b) swap(a, b);
        ans = min(ans, a - b + cnt);
        a /= x;
        cnt++;
    }
    ans = min(ans, cnt);
    cout << ans << "\n";
}
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; // Comment out if problem has a single test case
    while (t--) {
        solve();
    }

    return 0;
}