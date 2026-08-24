#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n, l, a;
    cin>>n>>l>>a;
    if(n==0){
        cout<<l/a<<endl;
        return;
    }
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v[i] = {x,y};
    }
    int ans = v[0].first / a;
    ans += (l - v[n-1].first - v[n-1].second) / a;
    int prev = v[0].first + v[0].second;
    for(int i=1;i<n;i++){
        ans += (v[i].first - prev) / a;
        prev = v[i].first + v[i].second;
    }
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
 