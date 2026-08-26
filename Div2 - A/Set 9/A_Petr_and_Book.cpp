#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int arr[7];
    for(auto &x:arr)cin>>x;
    int cnt = 0;
    while(true){
        for(int i=0;i<7;i++){
            cnt += arr[i];
            if(cnt>=n){
                cout<<i+1<<endl;
                return;
            }
        }
    }
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