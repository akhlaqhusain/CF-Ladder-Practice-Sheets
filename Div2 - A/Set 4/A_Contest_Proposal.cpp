#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;

    int i = 0;
    int cnt = 0;
    while(i<n){
        if(a[i]>b[i]){
            a.push_back(b[i]);
            sort(a.begin(),a.end());
            a.pop_back();
            cnt++;
        }
        i++;
    }

    cout<<cnt<<endl;
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
 