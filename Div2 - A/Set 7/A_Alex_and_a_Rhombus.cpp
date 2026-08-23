#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'


int ans(int i){
    if(i==1)return 1;
    int x = 0;
    for(int j=1;j<i;j++){
        x += 4;
    }
    return x+ans(i-1);
}

void solve()
{
    int n;
    cin>>n;
    cout<<ans(n)<<endl;
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
 