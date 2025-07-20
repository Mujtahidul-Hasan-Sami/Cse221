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
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int k; cin>>k;
    int sum  = 0;
    for(int i=0; i<k; i++){
        sum+=v[i];
    }
    // cout<<sum<<nl;
    int minsum = sum;
    for(int i=k; i<n; i++){
        sum+= v[i];
        sum-= v[i-k];
        minsum =  min(minsum,sum);
    }
    // cout<<mxsum<<nl;
    cout<<minsum;
}
int32_t main() {
    fastIO;
    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
    return 0;
}