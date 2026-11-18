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
    ll n, k, q;
    cin >> n >> k >> q;
    ll combinaison = 0, consecutif_days = 0;
    vll a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] <= q)
            consecutif_days ++;
        else{
            if(consecutif_days >= k)
                combinaison += (consecutif_days - k + 1) * (consecutif_days - k + 2) / 2;
            consecutif_days = 0;
        }
    }
    if(consecutif_days >= k)
        combinaison += (consecutif_days - k + 1) * (consecutif_days - k + 2) / 2;
    cout << combinaison << "\n";
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