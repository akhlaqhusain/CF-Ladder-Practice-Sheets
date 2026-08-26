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
    if(n<11){
        cout<<"NO\n";
        return;
    }
    //now n>=11
    //two cases are there when s[0]=='8' and s[0]!='8'
    if(s[0]=='8'){
        cout<<"YES\n";
    }else{
        if(count(s.begin(),s.end(),'8')){
            int idx;
            for(int i=0;i<n;i++){
                if(s[i]=='8'){
                    idx=i;
                    break;
                }
            }
            n -= idx;
            if(n>=11){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            cout<<"NO\n";
        }
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