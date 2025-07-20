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
    int sum = 0;
    int l = 0, mid = 1, r = 2;
    for(int i =0; i<3; i++){
        sum+=v[i];
    }
    if(sum==0){
        cout<<v[l]<<" "<<v[mid]<<" "<<v[r]<<nl;
        return;
    }
    for(int i=3; i<n; i++){
        sum+=v[i];
        sum-=v[i-3];
        r++;
        mid++;
        l++;
        if(sum==0){
            cout<<v[l]<<" "<<v[mid]<<" "<<v[r]<<nl;
            return;
        }
    }
    cout<<"IMPOSSIBLE"<<nl;

}

int32_t main() {
    fastIO;
    int n = 1;
    int t;
    cin >> t;
    while (n<=t) {
        cout<<"Case "<<n<< ":"<<nl;
        solve();
        n++;
    }
    return 0;
}