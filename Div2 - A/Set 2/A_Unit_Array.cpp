#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using lli = long long int;

#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define AKHLAQ  \
    unsigned t; \
    cin >> t;   \
    while (t--)
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

static constexpr auto MOD = 1000000007;
static constexpr auto MAX_N = 1000000;
static constexpr auto EPS = 1e-9;

// bool is_prime(int n) {
//     if (n <= 1) return false;
//     if (n <= 3) return true;
//     if (n % 2 == 0 || n % 3 == 0) return false;
//     for (int i = 5; i * i <= n; i += 6) {
//         if (n % i == 0 || n % (i + 2) == 0) return false;
//     }
//     return true;
// }

// bool is_palindrome(int a) {
//     string g = to_string(a);
//     string cg = g;
//     reverse(g.begin(), g.end());
//     return g == cg;
// }

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

// int factorial(int a) {
//     if (a == 1 or a == 0) return 1;
//     return factorial(a - 1) * a;
// }


void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int mi = 0;//minus one cnt
    int pl = 0;//plus one cnt
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]==-1?mi++:pl++;
    }
    int cnt = 0;//our ans
    while(1){
        if(pl<mi || mi%2!=0){
            pl++;
            mi--;
            cnt++;
        }else{
            break;
        }
    }
    cout<<cnt<<endl;
    
    
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