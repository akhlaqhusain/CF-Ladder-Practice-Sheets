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
    int x,k;
    cin>>x>>k;
    if(x%k!=0){
        cout<<1<<endl<<x<<endl;
    }else{
        int a = 1,b = x-1;
        while (1)
        {
            if(a%k!=0 and b%k!=0){
                break;
            }
            a++;
            b--;
        }
        cout<<2<<endl;
        cout<<a<<" "<<b<<endl;
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