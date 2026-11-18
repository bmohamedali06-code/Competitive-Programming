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
    ll n;
    cin >> n;
    ll min_lcm = 3e18;
    string s;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
        for(ll a : {i, n / i}){
            if(a == n) continue;
            ll b = n - a;
            if(b < min_lcm){
                s ="";
                s += to_string(a) + " " + to_string(b);
                min_lcm = b;
            }   
        }
        }
    }
    cout << s << "\n";
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