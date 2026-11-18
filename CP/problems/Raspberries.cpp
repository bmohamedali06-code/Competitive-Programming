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
    int n, k;
    cin >> n >> k;
    vll a(n);
    int nb_pair = 0;
    int min_op = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0)
            nb_pair++;
        int op = (a[i] % k == 0) ? 0: k - (a[i] % k);
        min_op = min(min_op, op);
    }
    if(k == 4){
        int op = max(0, 2 - nb_pair);
        cout << min(min_op, op) << endl;
    }
    else
        cout << min_op << endl;
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