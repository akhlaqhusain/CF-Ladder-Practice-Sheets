#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(auto &x:arr)cin>>x;

    sort(arr, arr+n);

    int ans = 0;
    for(int i=1;i<n;i++){
        ans += arr[i]-arr[i-1];
    }
    
    cout<<ans<<endl;
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
 