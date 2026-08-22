#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int a, b;
    cin>>a>>b;
    int t = a;
    n--;
    bool flag = false;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(!flag){
            if(x>=t && y>=b){
                t = -1;
                flag = true;
            }
        }
    }
    cout<<t<<endl;
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
 