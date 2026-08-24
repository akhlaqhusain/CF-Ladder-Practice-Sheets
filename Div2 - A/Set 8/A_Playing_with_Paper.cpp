#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int a,b;
    cin>>a>>b;
    int ans = 0;
    while(a>0 && b>0){
        if(a>=b){
            ans += a/b;
            a %= b;
        }else{
            ans += b/a;
            b %= a;
        }
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