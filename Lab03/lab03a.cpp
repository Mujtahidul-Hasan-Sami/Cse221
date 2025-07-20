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

int cnt  = 0;
void mergehlpr(vector<int>& v, int left, int mid, int right){
    int n1 = mid - left+1;
    int n2 = right - mid;
    vector<int> v1(n1), v2(n2);
    for(int i=0; i<n1; i++){
        v1[i] = v[left+i];
    }
    for(int i=0; i<n2; i++){
        v2[i] = v[mid+1+i];
    }
    int l = 0, r = 0, k = left;
    while(l<n1 && r<n2){
        if(v1[l]<=v2[r]){
            v[k]=v1[l];
            l++;
        }
        else{
            v[k]=v2[r];
            cnt += (n1 - l);
            r++;
        }
        k++;
    }
    while(l<n1){
        v[k]=v1[l];
        l++;
        k++;
    }
    while(r<n2){
        v[k]=v2[r];
        r++;
        k++;
    }
}
void mergesort(vector<int>& v, int left, int right) {
    if(left>=right) return;
    int mid = left + (right-left)/2;
    mergesort(v, left, mid);
    mergesort(v, mid+1, right);
    mergehlpr(v,left,mid,right);
}



int32_t main() {
    fastIO;
    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    //solve();
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    mergesort(v,0,n-1);
    cout<<cnt<<nl;
    for(auto a: v){
        cout<<a<<" ";
    }
    return 0;
}