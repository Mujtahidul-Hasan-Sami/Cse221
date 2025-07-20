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
    int u; cin>>u;
    vector<int> v1(u); for(int i=0; i<u; i++) cin>>v1[i];
    int v; cin>>v;
    vector<int> v2(v); for(int i=0; i<v; i++) cin>>v2[i];
    int w; cin>>w;
    vector<int> v3(w); for(int i=0; i<w; i++) cin>>v3[i];
    vector<int> ans;
    for (int i = 0; i < v1.size(); i++) ans.push_back(v1[i]);
    for (int i = 0; i < v2.size(); i++) ans.push_back(v2[i]);
    for (int i = 0; i < v3.size(); i++) ans.push_back(v3[i]);

    for(int i=0; i<ans.size()-1; i++){
        int min = i;
        for(int j= i+1; j<ans.size(); j++){
            if(ans[j]<ans[min]){
                min = j;
            }
        }
        swap(ans[min],ans[i]);
    }
    for(auto a : ans){
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