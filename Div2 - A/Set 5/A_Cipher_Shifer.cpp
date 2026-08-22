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
    string a;
    int tail = 0, head = 0;
    while(tail<n){
        while(head+1<n && s[head+1]!=s[tail]){
            head++;
        }
        a.push_back(s[tail]);
        tail = head + 2;
        head = tail;
    }
    cout<<a<<endl;
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
 