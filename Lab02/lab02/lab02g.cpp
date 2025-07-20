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
    int n, q; cin>>n>>q;
    vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<q; i++){
        while(q--){
            int l, r; cin>>l>>r;
            int left  = lower_bound(all(v),l)-v.begin();
            int right = upper_bound(all(v),r)-v.begin();
            cout<<right-left<<nl;
        }
        
    }
}

int32_t main() {
    fastIO;
    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve() ;
    return 0;
}