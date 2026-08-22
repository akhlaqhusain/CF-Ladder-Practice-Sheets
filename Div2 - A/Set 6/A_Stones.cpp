#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int stones = 0;
    while(b>=1 && c>=2){
        stones += 3;
        b -= 1;
        c -= 2;
    }
    while(a>=1 && b>=2){
        stones += 3;
        a -= 1;
        b -= 2;
    }
    cout<<stones<<endl;
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
 