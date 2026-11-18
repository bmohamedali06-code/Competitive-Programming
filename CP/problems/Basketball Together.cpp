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
    ll n, d;
    cin >> n >> d;
    vll p(n);
    for(ll i = 0; i < n; i++) cin >> p[i];
    sort(p.rbegin(), p.rend());
    int nb = 0;
    ll i = 0;
    while(n){
        ll sum = p[i];
        n--;
        while(n && sum <= d){
            sum += p[i];
            n--;
        }
        if(sum > d) nb++;
        i++;
    }
    cout << nb << '\n';
}
int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    
    solve();
    return 0;
}