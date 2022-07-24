#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define int long long
#define pi pair<int,int>
#define vi vector<int>
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TIME cerr << "\n" << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define inf      1e18
#define endl    "\n"
using namespace std;

void Solve() {
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        v[i] = abs(v[i]);
    }
    sort(all(v));
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        auto it = upper_bound(all(v), 2 * v[i]);
        int ind = it - v.begin();
        if (ind == n) {
            ind = n - 1;
        }
        if (v[ind] > 2 * v[i]) {
            ind--;
        }
        if (ind <= i)continue;
        ans += (ind - i);
    }
    cout << ans << endl;

}

int32_t main() {
    FAST_IO
    int TC = 1;
    // cin >> TC;
    while (TC--) {
        Solve();
    }
    TIME
}