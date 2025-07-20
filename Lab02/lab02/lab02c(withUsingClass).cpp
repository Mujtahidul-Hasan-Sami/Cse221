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

struct serial{
    int value;
    int order;
};
void solve() {
    int n, k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<serial> srl(n), sorted(n);
    for(int i=0; i<n; i++){
        srl[i].value = v[i];
        srl[i].order = i;
    }
    sorted = srl;

    for(int i=0; i<n; i++){
        int mn  = i;
        for(int  j=i+1; j<n; j++){
            if(sorted[j].value<sorted[mn].value){
                mn = j;
            }
        }
        swap(sorted[i],sorted[mn]);
    }
    int ans = 0;
    for(int l=0; l<n; l++){
        int i  = l+1, j = n-1;
        while(i<j){
            ans=sorted[l].value+sorted[i].value+sorted[j].value;
            if(ans<k){
                i++;
            }
            else if(ans>k){
                j--;
            }
            else if(ans==k){
                // cout<<ans<<nl;
                // cout<<sorted[l].value<<" "<<sorted[i].value<<" "<<sorted[j].value<<nl;
                cout<<sorted[l].order+1<<" "<<sorted[i].order+1<<" "<<sorted[j].order+1;
                return;
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
    solve() ;
    return 0;
}