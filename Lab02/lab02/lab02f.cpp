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
    unordered_map<int,int> mpp;
    int cnt  =0;
    int left = 0, ans = 0;
    for(int i=0; i<n; i++){
        mpp[v[i]]++;
        while(left<n && mpp.size()>k){
            mpp[v[left]]--;
            if(mpp[v[left]]==0){
                mpp.erase(v[left]);
            }
            left++;
        }
        ans = max(ans,i-left+1);
    }
    // for(auto a: mpp){
    //     cout<<a.first<<"  "<<a.second<<nl;;
    // }
    cout<<ans;
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