/*
    author -> akhlaqhusain
*/
 
#include <bits/stdc++.h>
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vc vector<char>
#define di deque<int>
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
    int n;
    cin>>n;
    vi a(n);
    fr(i,n) cin>>a[i];
    int ans = -1;
    for(int i=1;i<n-1;i++){
        if(a[i]>a[i-1] and a[i]>a[i+1]){
            ans = i;
            break;
        }
    }
    if(ans == -1){
        no;
    }else{
        yes;
        cout<<ans<<" "<<(ans+1)<<" "<<ans+2<<endl;
    }
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