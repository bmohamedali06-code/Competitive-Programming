#include <bits/stdc++.h>
using namespace std;

// --- OPTIMIZATIONS (Disabled locally for faster compilation) ---
#ifndef LOCAL
#pragma GCC optimize("O3,unroll-loops")
#endif

// --- TYPE ALIASES ---
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

// --- MACROS ---
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) static_cast<int>((x).size())

// --- CONSTANTS ---
constexpr int INF = 1e9 + 7;
constexpr ll LINF = 1e18 + 7;
constexpr int MOD = 1e9 + 7; // 998244353

// --- HELPERS ---
template <class T> bool chmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template <class T> bool chmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

ll ceil_div(ll a, ll b) { return a / b + ((a ^ b) > 0 && a % b != 0); }
ll floor_div(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b != 0); }

// --- LOCAL DEBUGGER (Compile with -DLOCAL) ---
#ifdef LOCAL
template <typename A, typename B> ostream& operator<<(ostream& os, const pair<A, B>& p);
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream& operator<<(ostream& os, const T_container& v) {
    os << '{';
    string sep;
    for (const T& x : v) os << sep << x, sep = ", ";
    return os << '}';
}
template <typename A, typename B>
ostream& operator<<(ostream& os, const pair<A, B>& p) {
    return os << '(' << p.first << ", " << p.second << ')';
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v) {
    cerr << t;
    if (sizeof...(v)) cerr << ", ";
    _print(v...);
}
#define dbg(x...) cerr << "[" << #x << "] = [", _print(x)
#else
#define dbg(x...)
#endif

// --- SOLUTION ---
void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t; // Comment out for single-testcase problems
    while (t--) {
        solve();
    }
    return 0;
}