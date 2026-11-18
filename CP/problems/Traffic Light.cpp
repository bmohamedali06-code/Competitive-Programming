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
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    ll min_time = 0,count = 0;
    if( c == 'g'){
        cout << count << '\n';
        return;
    }
    for(ll i = 0; i < n; i++){
        if(s[i] == 'g' && count){
            min_time = max(min_time, count);
            count = 0;
        }
        else if(s[i] == c || count) count++;
    }
    if(count > 0){
        min_time = max(min_time, (int)s.find('g') + count);
    }
    cout << min_time << "\n";
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