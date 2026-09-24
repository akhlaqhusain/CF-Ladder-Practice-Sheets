#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a>=c){
        cout<<-1<<" "<<2<<endl;
    }else{
        cout<<1<<" ";
        if(a*b<=c){
            cout<<"-1\n";
        }else{
            cout<<b<<endl;
        }
    }
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