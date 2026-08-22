#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n,s,k;
    cin>>n>>s>>k;
    vector<int> a(k);
    for(auto &x:a)cin>>x;
    sort(a.begin(),a.end());
    int ans = INT_MAX;
    for(int i=s;i>=1;i--){
        if(!binary_search(a.begin(),a.end(),i)){
            ans = i;
            break;
        }
    }
    for(int i=s+1;i<=n;i++){
        if(!binary_search(a.begin(),a.end(),i)){
            if(abs(ans-s)>abs(i-s)){
                ans = i;
            }
            break;
        }
    }
    cout<<abs(ans-s)<<endl;//for minimum number of staircase
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
 