#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mn = min((max(a,c)-min(a,c)),(max(b,d)-min(b,d)));
    int mx = max((max(a,c)-min(a,c)),(max(b,d)-min(b,d)));
    int ans = mn + (mx-mn);
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
/*
    author -> akhlaqhusain
*/