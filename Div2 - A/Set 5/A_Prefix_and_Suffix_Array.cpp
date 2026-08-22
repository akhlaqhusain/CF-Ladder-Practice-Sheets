#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    n *= 2;
    n -= 2;
    vector<string> v(n);
    for(auto &x:v)cin>>x;
    for(int i=0;i<n;i++){
        string t = v[i];
        reverse(t.begin(),t.end());
        bool flag = true;
        for(int j=0;j<n;j++){
            if(j==i)continue;
            if(v[j]==t){
                flag = false;
            }
        }
        if(flag){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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
 