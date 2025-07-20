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
    for(int i =0; i<n; i++) cin>>v[i];
    int l = 0, r = 1;
    int mx = 100;
    int i  = -1, j = -1;
    int sum = v[l]+v[r];
    while(l<n && r<n){
        // int sum = v[l]+v[r];
        int diff = abs(k-sum);
        if(diff<mx){
            mx =  diff;
            i=l; j=r;
        }
        if(sum<k){
            r++;
            sum += v[r];
        }
        else if(sum>k){
            sum-=v[l];
            l++;
        }
        else break;
    }
    cout<<i<<" "<<j;
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