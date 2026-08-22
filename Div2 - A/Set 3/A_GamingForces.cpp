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

    int one_count = count(a.begin(),a.end(),1ll);
    int sum = n - one_count;

    if(one_count!=0){
        sum += (one_count+1)/2;
    }

    cout<<sum<<endl;
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
 