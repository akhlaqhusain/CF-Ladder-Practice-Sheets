#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(auto &x:v)cin>>x;
    int sum  = accumulate(v.begin(),v.end(),0ll);
    bool flag = true;
    for(int i=0;i<n;i++){
        if(v[i]%x!=0){
            flag  = false;
            break;
        }
    }
    if(flag){
        cout<<-1<<endl;
    }else{
        if(sum%x!=0){
            cout<<n<<endl;
        }else{
            int a = n,b = 0;
            for(int i=0;i<n;i++){
                if(v[i]%x!=0){
                    a = min(a, i);
                    b = max(b, i);
                }
            }
            int t1 = a;
            int t2 = n - 1 - b;
            if(t1<t2){
                cout<<n-1-a<<endl;
            }else{
                cout<<b<<endl;
            }
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