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
    vector<pair<int,int>>v1(n);
    for(int i=0; i<n; i++){
        cin>>v1[i].first;
        cin>>v1[i].second;
    }
    int k; cin>>k;
    vector<pair<int,int>>v2(k);
    for(int i=0; i<k; i++){
        cin>>v2[i].first;
        cin>>v2[i].second;
    }
    vector<pair<int,int>> vans;
    // vector<int> vevv;
    for(int i=0; i<n; i++){
        if(!isEven(i)){
          vans.pb(v1[i]);
        }
    }
    for(int i=0; i<k; i++){
        if(!isEven(i)){
          vans.pb(v2[i]);
        }
    }

    for(int i=0; i<sz(vans)-1; i++){
        int min = i;
        for(int j= i+1; j<sz(vans); j++){
            if(vans[min].second>vans[j].second){
                min  = j;
            }
        }
        swap(vans[min], vans[i]);
    }

    for(auto a : vans){
        cout<<a.first<<" "<<a.second<<nl;
    }
}

int32_t main() {
    fastIO;
    // int t = 2;
    // // cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
    return 0;
}