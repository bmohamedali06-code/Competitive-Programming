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
    int a, b, c;
    cin >> a >> b >> c;
    bool test = false;
    // case one
    a--;
    b++;
    if(a == b && b == c) test = true;
    b--;
    c++;
    if(a == b && b ==c) test = true;
    a++;
    b--;
    if(a == b && b ==c) test = true;
    c--;
    a++;
    if(a == b && b ==c) test = true;
    b++;
    c--;
    if(a == b && b ==c) test = true;
    a--;
    b++;
    if(a == b && b ==c) test = true;
    if(test)
        cout << "YES\n";
    else    
        cout << "NO\n";

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