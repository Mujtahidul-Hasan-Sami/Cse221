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
#define          gcd(a,b) __gcd(a,b)

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)   cin>>v[i];
    vector<int> v1 = v; vector<int> vorev; vector<int> vsorev; vector<int> vorodd; vector<int> vsorodd; 
    sort(all(v1));
    if(v1==v){
        yes;
        return;
    }
    for(int i=0; i<n; i++) {
        if(i%2==0){
            vorev.push_back(v[i]);
            vsorev.push_back(v1[i]);
        }
        else{
            vorodd.push_back(v[i]);
            vsorodd.push_back(v1[i]);
        }
    }
    sort(all(vorev));
    sort(all(vorodd));
    sort(all(vsorev));
    sort(all(vsorodd));
    if(vorev==vsorev && vorodd==vsorodd){
        yes;
    }
    else no;
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