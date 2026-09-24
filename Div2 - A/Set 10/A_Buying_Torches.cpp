#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int x,y,k;
    cin>>x>>y>>k;
    int total_sticks = (k-1) + (k*y);
    x--;
    int ans = (total_sticks + x - 1) / x; //ceil value -> stick step
    ans += k; //coal steps
    cout<<ans<<endl;
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