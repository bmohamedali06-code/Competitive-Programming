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
    string s;
    cin >> s;
    vi freqA(26, 0), freqB(26, 0);
    ll distinctA = 0, distinctB = 0, max_len = 0;
    for(char c : s){
        if(freqB[c - 'a'] == 0) distinctB++;
        freqB[c - 'a']++;
    }
    for(ll i = 0; i < n; i++){
        if(freqA[s[i] - 'a'] == 0) distinctA++;
        freqA[s[i] - 'a']++;
        freqB[s[i] - 'a']--;
        if(freqB[s[i] - 'a'] == 0) distinctB--;
        max_len = max(max_len,  distinctA + distinctB);
    }
    
    cout << max_len << "\n";
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