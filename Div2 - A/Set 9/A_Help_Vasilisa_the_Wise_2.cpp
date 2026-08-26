#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int r2,r1,c1,c2,d1,d2; 
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    for(int i=1;i<=9;i++){
        int t1 = r1-i;
        int t2 = c1-i;
        int t3 = r2-t2;
        if(t1+t3!=c2 or t1+t2!=d2 or i+t3!=d1)continue;
        if((t1<1 or t1>9 or t2<1 or t2>9 or t3<1 or t3>9))continue;
        if(i==t1 or i==t2 or i==t3 or t1==t2 or t1==t3 or t2==t3)continue;
        cout<<i<<" "<<t1<<endl;
        cout<<t2<<" "<<t3<<endl;
        return;
    }
    cout<<-1<<endl;
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