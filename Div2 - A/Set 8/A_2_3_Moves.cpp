#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int arr[4] = {2, 1, 1, 2};
    if(n<=4){
        cout<<arr[n-1]<<endl;
        return;
    }
    if(n%3==0){
        cout<<n/3<<endl;
    }else{
        cout<<n/3+1<<endl;
    }
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
 