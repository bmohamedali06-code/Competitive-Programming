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
    vll a(n), b(n);
    vll sequencesA(2 * n + 1, 0), sequencesB(2 * n + 1, 0);    
    ll seq = 1;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        if(i > 0  && a[i] == a[i - 1])
            seq++;
        else
            seq = 1;
        sequencesA[a[i]] = max(sequencesA[a[i]],seq);
    }
    seq = 1;
    for(ll i = 0; i < n; i++){
        cin >> b[i];
        if(i > 0  && b[i] == b[i - 1])
            seq++;
        else
            seq = 1;
        sequencesB[b[i]] = max(sequencesB[b[i]], seq);
    }
    ll max_seq = 0;
    for(ll i = 1; i < 2 * n + 1; i++){
        max_seq = max(max_seq, sequencesA[i] + sequencesB[i]);
    } 
    cout << max_seq << "\n";
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