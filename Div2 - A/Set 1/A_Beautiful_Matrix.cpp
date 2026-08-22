#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int x,y;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int temp;
            cin>>temp;
            if(temp){
                x = i;
                y = j;
            }
        }
    }
    int ans = abs(x-3)+abs(y-3);
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    unsigned t=1;
    // cin>>t;
    while(t--)solve();
}
/*
    author -> akhlaqhusain
*/
 