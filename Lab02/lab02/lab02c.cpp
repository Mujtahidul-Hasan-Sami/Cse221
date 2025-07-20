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
    int n, l; cin>>n>>l;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first;
        v[i].second = i+1;
    }
    for(int i=0;i<n-1; i++){
        int min =  i;
        for(int j=i+1; j<n; j++){
            if(v[min].first>v[j].first){
                min = j;
            }
        }
        swap(v[min].first, v[i].first);
        swap(v[min].second, v[i].second);
    }
    // for(auto a : v){
    //     cout<<a.first<<" ";
    // }
    // cout<<nl;
    for(int i=0; i<n; i++){
        int j  = i+1;
        int k  = n-1;
        while(j<k){
            int sum = v[i].first+v[j].first+v[k].first;
            if(sum==l) {
                cout<<v[i].second<<" "<<v[j].second<<" "<<v[k].second;
                return;
            }
            else if(sum>l){
                k--;
            }
            else if(sum<l){
                j++;
            }
        }
    }
    cout<<-1;

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