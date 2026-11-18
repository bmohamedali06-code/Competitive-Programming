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
void find_all_possible(set<pair<int, int>>& possible, int x, int y, int a, int b) {
    vector<pair<int, int>> adding = {
        {a, b},{a, -b},{-a, b},{-a, -b},{b, a},{b, -a},{-b, a},{-b, -a}
    };
    for(auto [i, j] : adding){
        possible.insert({x + i, y + j});
    }
}
void solve() {
    int a, b;
    cin >> a >>b;
    int xk, yk;
    int xq, yq;
    cin >> xk >> yk;
    cin >> xq >> yq;
    set<pair<int, int>> k_possible;
    set<pair<int, int>> q_possible;

    find_all_possible(k_possible, xk, yk, a, b);
    find_all_possible(q_possible, xq, yq, a, b);

    int common_position = 0;
    for(auto pair : k_possible){
        if(q_possible.count(pair))
            common_position++;
    }
    cout << common_position << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}