#include <bits/stdc++.h>
#include <algorithm>
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
    int n;
    cin >> n;
    ll first_min = 1e18;
    ll second_min = 1e18;
    ll sum_min = 0;
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        vll t(m);
        for (int j = 0; j < m; j++) cin >> t[j];
        sort(t.begin(), t.end());
        first_min = min(first_min, t[0]);
        second_min = min(second_min, t[1]);
        sum_min += t[1];
    }
    ll beauty = sum_min - second_min + first_min;
    cout << beauty << "\n";

}

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
