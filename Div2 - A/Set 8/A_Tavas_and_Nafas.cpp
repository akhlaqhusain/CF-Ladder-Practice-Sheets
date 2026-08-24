#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    string s;
    cin>>s;
    string arr[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    if(s.size()==1){
        cout<<arr[s[0]-'0']<<endl;
    }else{
        //s.size()==2 because max we can go till 99 -> given in the question
        int x = stoi(s);
        if(x<20){
            cout<<arr[x]<<endl;
        }else{
            string arr2[10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
            cout<<arr2[s[0]-'0'];
            if((s[1]-'0')>0){
                cout<<"-"<<arr[s[1]-'0']<<endl;
            }else{
                cout<<endl;
            }
        }
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