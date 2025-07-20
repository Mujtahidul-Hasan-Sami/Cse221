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

struct student{
    int id, num, indx;
};

bool cmp(student a, student b){
    if(a.num!=b.num){
        return a.num>b.num;
    }
    return a.id<b.id;
}
void solve() {
    int n; cin>>n; 
    vector<int> vid(n);
    vector<int> vnum(n);
    for(int i=0; i<n; i++) cin>>vid[i];
    for(int i=0; i<n; i++) cin>>vnum[i];

    vector<student> student(n), sorted(n);
    for(int i=0; i<n; i++){
        student[i].id = vid[i];
        student[i].num = vnum[i];
        student[i].indx = i;
    }

    sorted = student;
    sort(all(sorted),cmp);

    vector<int> pos(n);
    for(int i=0; i<n; i++){
        pos[sorted[i].indx] = i;
    }

    vector<bool> visited(n,false);
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(visited[i]==true || pos[i]==i) continue;
        int cycle_sz = 0;
        int j = i;
        while(!visited[j]){
            visited [j] = true;
            j = pos[j];
            cycle_sz++;
        }
        if(cycle_sz>1) cnt+=(cycle_sz-1);
    }
    cout<<"Minimum swaps: "<<cnt<<nl;
    for(auto a : sorted){
        cout<<"ID: "<<a.id<<" Mark: "<<a.num<<nl;
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