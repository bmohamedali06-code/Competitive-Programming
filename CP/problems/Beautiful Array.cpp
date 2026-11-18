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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    vll a(n, 0);
    if((s < k * b) || (s > k * b + n * (k - 1))){
        cout << -1 <<'\n';
        return;
    }
    ll i = n - 2;
    a[n - 1] = s;
    while(i >=0 && (a[n - 1] / k) != b){
        a[n - 1] -= k - 1;
        a[i] = k - 1;
        i--;
    }
    for(ll i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << '\n';
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