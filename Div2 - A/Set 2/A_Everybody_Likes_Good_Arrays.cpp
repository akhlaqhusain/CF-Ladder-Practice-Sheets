/*
    author -> akhlaqhusain
*/
 
#include <bits/stdc++.h>
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define AKHLAQ unsigned t; cin>>t; while(t--)
using namespace std;

static constexpr auto MOD = 1000000007;
static constexpr auto MAX_N = 1000000;
static constexpr auto EPS = 1e-9;

void solve()
{
    int n; cin>>n;
    vi arr(n);
    fr(i,n) cin>>arr[i];
    // bool iseven = false;
    // bool isodd = false;
    // fr(i,n){
    //     if(arr[i]%2==0){
    //         iseven = true;
    //     }else{
    //         isodd = true;
    //     }
    // }
    // if((iseven and !isodd) || (!iseven and isodd)){
    //     cout<<n-1<<endl;
    //     return;
    // }
    int ans = 0;
    fr(i,n-1){
        if(arr[i]%2==1 and arr[i+1]%2==1){
            ans++;
        }
        if(arr[i]%2==0 and arr[i+1]%2==0){
            ans++;
        }
    }
    cout<<ans<<endl;
}

int32_t main()
{
    // #ifndef ONLINE_JUDGE
    //      freopen("input.txt", "r", stdin);
    //      freopen("output.txt", "w", stdout);
    // #endif
    FAST_IO
    AKHLAQ
    {
        solve();
    }
}