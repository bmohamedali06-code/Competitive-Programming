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
    ll n, p;
    cin >> n >> p;
    vll a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];    
    for(int i = 0; i < n; i++) cin >> b[i]; 
    vector<pair<ll, ll>> paired(n);
    for (int i = 0; i < n; i++) {
        paired[i] = {b[i], a[i]};
    }

    sort(paired.begin(), paired.end());

    ll remaining = n - 1;
    ll cost = p;

    for(int i= 0; i < n; i++){
        if(remaining == 0) break;
        ll sharing_i = paired[i].second;
        ll cost_i = paired[i].first;
        if(cost_i < p){
            ll shared = min(remaining, sharing_i);
            cost += shared * cost_i;
            remaining -= shared;
        }
        else break;
        
    }
    cost += remaining * p;
    cout << cost << "\n";
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
