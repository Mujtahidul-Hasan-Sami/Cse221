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
    int n ,m , k; cin>>n>>m>>k;
    vector<int>v1(n),v2(m);
    for(int i=0; i<n; i++)  cin>>v1[i];
    for(int i=0; i<m; i++)  cin>>v2[i];
    int i = 0, j =  m-1;
    int mn = LLONG_MAX, iindx = 0, jindx = 0;
    while(i<n && j>=0){
        int sum  = v1[i]+v2[j];
        if(abs(sum-k)<mn){
            mn = abs(sum-k);
            iindx = i;
            jindx = j;
        }
        if(sum<k) i++;
        else if(sum>k) j--;
        else{
            iindx = i;
            jindx = j;
            break;
        }
    }
    cout<<iindx+1<<" "<<jindx+1;
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