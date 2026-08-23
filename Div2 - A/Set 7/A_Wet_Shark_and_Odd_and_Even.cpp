#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a)cin>>x;
    int sum = 0;
    vector<int> odds;
    for(auto val:a){
        if(val&1)odds.push_back(val);
        else sum+=val;
    }
    sort(odds.begin(),odds.end(),greater<int>());
    int x = odds.size();
    if(x&1){
        x--;
    }
    for(int i=0;i<x;i++){
        sum += odds[i];
    }
    cout<<sum<<endl;
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
 