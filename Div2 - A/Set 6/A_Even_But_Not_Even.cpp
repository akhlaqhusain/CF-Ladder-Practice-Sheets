#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    char f,se;
    for(int i=0;i<n;i++){
        int dig = s[i] - '0';
        if(dig&1){
            if(cnt==0){
                cnt++;
                f = s[i];
            }else if(cnt==1){
                cnt++;
                se = s[i];
                break;
            }
        }
    }
    if(cnt!=2){
        cout<<-1<<endl;
        return;
    }
    cout<<f<<se<<endl;
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
 