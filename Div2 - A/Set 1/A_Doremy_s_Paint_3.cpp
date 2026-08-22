#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using lli = long long int;
using vl = vector<long>;
using pll = pair<long, long>;
using sl = set<long>;
using uml = unordered_map<long, long>;

#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define AKHLAQ  \
    unsigned t; \
    cin >> t;   \
    while (t--)
#define endl '\n'
#define all(v) sort(v.begin(), v.end())
#define allr(v) sort(v.rbegin(), v.rend())
#define rev(v) reverse(v.begin(), v.end())
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
//for accessing set elements *next(setName.begin(), index)

static constexpr auto MOD = 1000000007;
static constexpr auto MAX_N = 1000000;
static constexpr auto EPS = 1e-9;

// bool comp(pair<int, int> p1, pair<int, int> p2)
// {
//     if (p1.first < p2.first)
//         return true;
//     if (p1.first > p2.first)
//         return false;

//     if (p1.second < p2.second)
//         return true;
//     return false;
// }

void solve()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==2){
        yes;
        return;
    }
    vector<ll> temp(n,arr[0]);
    if(temp==arr){
        yes;
        return;
    }
    ll eve = n/2;
    ll odd = (n-eve);
    map<int,int> mp;
    for(auto val:arr){
        mp[val]++;
    }
    sort(arr.begin(),arr.end());
    if(mp[arr[0]]==eve && mp[arr[n-1]]==odd){
        yes;
    }else if(mp[arr[n-1]]==eve && mp[arr[0]]==odd){
        yes;
    }else{
        no;
    }
    
}

int32_t main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    FAST_IO
    AKHLAQ
    {
        solve();
    }
}