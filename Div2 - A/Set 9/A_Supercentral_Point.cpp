#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v[i] = {x,y};
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        bool a=false,b=false,c=false,d=false;
        for(int j=0;j<n;j++){
            if(v[j].first==v[i].first && v[j].second<v[i].second){
                a = true;
            }
            if(v[j].first==v[i].first && v[j].second>v[i].second){
                b = true;
            }
            if(v[j].first<v[i].first && v[j].second==v[i].second){
                c = true;
            }
            if(v[j].first>v[i].first && v[j].second==v[i].second){
                d = true;
            }
        }
        int cnt = a+b+c+d;
        if(cnt==4)ans++;
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