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
    int n, k; cin>>n>>k; 
    vector<int> v(n); 
    for(int i=0; i<n; i++) cin>>v[i];
    // int k; cin>>k; 
    vector<int> v1(k);
    for(int i=0; i<k; i++) cin>>v1[i];
    set<int> ans;
    int l = 0, r = 0;
    while(l<n && r<k){
        if(v[l]<v1[r]) l++;
        else if (v[l]>v1[r]) r++;
        else{
            ans.insert(v1[r]);
            r++;
            l++;
        }
    }
    for(auto a: ans){
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
    solve();
    return 0;
}