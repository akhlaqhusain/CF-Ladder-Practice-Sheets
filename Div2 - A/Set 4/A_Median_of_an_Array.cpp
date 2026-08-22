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
    int mid = n/2;
    if(n%2==0){
        mid--;
    }
    int cnt = 0;
    for(int i=mid;i<n;i++){
        if(arr[i]==arr[mid]){
            cnt++;
        }
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
 