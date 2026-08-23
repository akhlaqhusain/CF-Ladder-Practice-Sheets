#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> a(n);
    for(auto &x:a)cin>>x;

    for(int i=0;i<n;i++){
        int curr_val = a[i];
        bool flag = false;
        for(int j=i-1;j>=max(0ll,(i-x));j--){
            if(a[j]<curr_val){
                flag = true;
                break;
            }
        }
        for(int j=i+1;j<=min(n-1,i+y);j++){
            if(a[j]<curr_val){
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<<i+1<<endl;
            return;
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
 