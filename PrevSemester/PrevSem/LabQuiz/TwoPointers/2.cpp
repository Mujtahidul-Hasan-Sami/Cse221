#include <bits/stdc++.h>
using namespace std;

#define         fastIO   ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
#define           int    long long
#define          all(v)   v.begin(), v.end()
#define         rall(v)   v.rbegin(), v.rend()
#define           pb      push_back
#define          sz(a)    (int)a.size()
#define           nl      "\n"
#define          yes      cout << "YES\n"
#define           no      cout << "NO\n"
#define      isEven(l)    ((l) % 2 == 0)
#define       gcd(a,b)    __gcd(a,b)

void solve() {
    int n; cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++) cin >> v1[i];

    int k; cin >> k;
    vector<int> v2(k);
    for (int i = 0; i < k; i++) cin >> v2[i];

    int target; cin >> target;

    int l = 0, r = 0, cnt = 0;
    int ans = 0;

    while (l < n && r < k) {
        if (v1[l] < v2[r]) {
            ans = v1[l++];
        } else {
            ans = v2[r++];
        }
        cnt++;
        if (cnt == target) {
            cout << ans << nl;
            return;
        }
    }

    while (l < n) {
        ans = v1[l++];
        cnt++;
        if (cnt == target) {
            cout << ans << nl;
            return;
        }
    }

    while (r < k) {
        ans = v2[r++];
        cnt++;
        if (cnt == target) {
            cout << ans << nl;
            return;
        }
    }
}

int32_t main() {
    fastIO;
    solve();
    return 0;
}
