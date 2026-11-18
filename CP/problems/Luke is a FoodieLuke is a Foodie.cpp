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
    ll n, x;
    cin >> n >> x;
    vll a(n);
    int nb = 0;
    cin >> a[0];
    ll min_value = a[0] - x, max_value = a[0] + x;
    for(ll i = 1; i < n; i++){
            cin >> a[i];
            ll new_min = a[i] - x, new_max = a[i] + x;
            if((new_max < min_value) || (new_min > max_value)){
                nb++;
                min_value = new_min;
                max_value = new_max;
            }
            else{
                min_value = max(min_value, new_min);
                max_value = min(max_value, new_max);
            }
    }
    cout << nb << '\n';
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