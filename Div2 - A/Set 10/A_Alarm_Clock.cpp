#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<=b){
        cout<<b<<endl;
        return;
    }
    //now a>b
    if(c<=d){
        cout<<-1<<endl;
        return;
    }
    //now c>d
    int x = c - d;
    a -= b;
    int y = (a + x - 1) / x; //ceil value calculation
    int ans = b + c*y;
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