#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int m;
    cin>>m;
    int x = 1;
    int d = 0;
    for(int i=0;i<=9;i++){
        int temp = m - x;
        if(temp>=0){
            d = temp;
            x *= 10;
        }else{
            break;
        }
    }
    cout<<d<<endl;
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
 