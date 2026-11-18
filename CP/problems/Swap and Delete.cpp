#include <bits/stdc++.h>
using namespace std;

// --- OPTIMIZATIONS ---
#pragma GCC optimize("O3,unroll-loops")
// Remove or comment this line to fix MinGW STL inlining errors:
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

// --- SHORTCUTS & ALIASES ---
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) static_cast<int>((x).size())

// --- SOLUTION FUNCTION ---

void solve() {
    string s;
    cin >> s;
    
    int num_1 = 0, num_0 = 0, n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') num_1++;
        else num_0++;
    }
    
    string t = "";
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (num_0 > 0) {
                t += '0';
                num_0--;
            }
            else break;
        }
        else {
            if (num_1 > 0) {
                t += '1';
                num_1--;
            }
            else  break;
        }
    }
 
    cout << n - t.length() << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}