#include <bits/stdc++.h>
using namespace std;

#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    cout.precision(numeric_limits<double>::max_digits10);
#define int long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define nl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define isEven(l) ((l) % 2 == 0)
#define gcd(a, b) __gcd(a, b)

struct train
{
    string fl;
    string name;
    int hr, min;
    int indx;
};

bool cmp(train a, train b)
{
    if (a.name != b.name)
        return a.name < b.name;
    int atime = a.hr * 60 + a.min;
    int btime = b.hr * 60 + b.min;
    if (atime != btime)
        return atime > btime;
    return a.indx < b.indx;
}
void solve()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<train> train(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        train[i].fl = s;
        train[i].indx = i;

        size_t ff = s.find(" will departure for");
        train[i].name = s.substr(0, ff);

        size_t l = s.find(" at ");
        string tme = s.substr(l + 4);
        train[i].hr = stoll(tme.substr(0, 2));
        train[i].min = stoll(tme.substr(3, 2));
    }
    sort(all(train), cmp);
    for (auto a : train)
    {
        cout << a.fl << nl;
    }
}

int32_t main()
{
    fastIO;
    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
    return 0;
}