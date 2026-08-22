#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define vi vector<int>
#define pii pair<int,int>
#define in(n) int n;cin>>n;
#define get(s) string s;cin>>s;
#define take(v,n) vector<int> v(n);for(auto &x:v)cin>>x;
#define prt(v) for(auto x:v)cout<<x<<' ';cout<<endl;
#define all(v) v.begin(),v.end()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define MOD (int)1e9+7
#define INF (int)1e18

void solve()
{
    in(n);
    take(a,n);
    int sum = accumulate(all(a), 0ll);
    string s;
    while(sum!=0){//?O(n.log(mx_element))
        bool isOdd = false;
        for(int i=0;i<n;i++){
            if(a[i]&1){
                isOdd = true;
            }
            sum -= a[i];
            a[i] /= 2;
            sum += a[i];
        }
        isOdd?s.push_back('1'):s.push_back('0');
    }
    int ans = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            ans += pow(2, i);
        }
    }
    cout<<ans<<endl;
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
 