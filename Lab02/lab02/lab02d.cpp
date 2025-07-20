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
    vector<int>v1(n),vfinal;
    for(int i=0; i<n; i++) cin>>v1[i];
    int m; cin>>m;
    vector<int> v2(m);
    for(int i=0; i<m; i++) cin>>v2[i];
    int i = 0, j = 0;
    while(i<n && j<m){
        if(v1[i]<v2[j]){
            vfinal.pb(v1[i++]);
        }
        else if(v1[i]>v2[j]){
            vfinal.pb(v2[j++]);
        }
        else{
            vfinal.pb(v1[i++]);
            vfinal.pb(v2[j++]);
        }
    }
    while (i < n) vfinal.pb(v1[i++]);
    while (j < m) vfinal.pb(v2[j++]);

    for(auto a : vfinal){
        cout<<a<<" ";
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