#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int whiteScore = 0, blackScore = 0;
    map<char,int> mp;
    mp['q'] = 9;
    mp['r'] = 5;
    mp['b'] = 3;
    mp['n'] = 3;
    mp['p'] = 1;
    mp['k'] = 0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            char ch;
            cin>>ch;
            if(ch=='.')continue;
            if(isupper(ch)){
                //white pieces
                whiteScore += mp[tolower(ch)];
            }else{
                //black pieces
                blackScore += mp[ch];
            }
        }
    }
    if(whiteScore>blackScore){
        cout<<"White\n";
    }else if(whiteScore<blackScore){
        cout<<"Black\n";
    }else{
        cout<<"Draw\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
/*
    author -> akhlaqhusain
*/
