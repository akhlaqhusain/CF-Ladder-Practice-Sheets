#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define vi vector<int>
#define pii pair<int,int>
#define in(n) int n;cin>>n;
#define get(s) string s;cin>>s;
#define take(v,n) vector<int> v(n);for(auto &x:v)cin>>x;
#define prt(v) for(auto x:v)cout<<x<<' ';cout<<endl;
#define all(v) v.begin(),v.end()
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define MOD (int)1e9+7
#define INF (int)1e18

void solve()
{
    in(n);
    take(a,2*n);
    int eve = 0, odd = 0;
    for(int i=0;i<2*n;i++){
        (a[i]&1)?odd++:eve++;
    }
    (odd==eve)?yes:no;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
/*
    author -> akhlaqhusain
*/
 