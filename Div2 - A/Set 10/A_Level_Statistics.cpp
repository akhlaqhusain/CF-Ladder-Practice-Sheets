#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n;cin>>n;
    int prev_p = -1, prev_c = -1;
    bool flag = true;
    while(n--){
        int curr_p,curr_c;
        cin>>curr_p>>curr_c;
        if(curr_p<prev_p || curr_c<prev_c || (curr_c-prev_c)>(curr_p-prev_p)){
            flag = false;
        }
		prev_p = curr_p, prev_c = curr_c;
    }
    if(flag){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
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