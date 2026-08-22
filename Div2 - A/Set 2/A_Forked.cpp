#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define di deque<int>
#define pii pair<int,int>
#define mpii map<int,int>
#define umpii unordered_map<int,int>
#define take(v) for(auto &x : v) cin >> x
#define prt(v) for(auto &x : v) cout << x << ' '; cout << endl
#define endl '\n'
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define cntbits(x) __builtin_popcountll(x)
#define AKHLAQ unsigned t; cin>>t; while(t--)
using namespace std;

static constexpr auto MOD = 1000000007;
static constexpr auto EPS = 1e-9;

void solve()
{
  int a,b;
  cin>>a>>b;
  int xk,yk,xq,yq;
  cin>>xk>>yk>>xq>>yq;
  set<pii> kingMoves,queenMoves;
  //king moves
  kingMoves.insert(make_pair(xk-a,yk+b));
  kingMoves.insert(make_pair(xk-a,yk-b));
  kingMoves.insert(make_pair(xk+a,yk+b));
  kingMoves.insert(make_pair(xk+a,yk-b));
  kingMoves.insert(make_pair(xk+b,yk+a));
  kingMoves.insert(make_pair(xk+b,yk-a));
  kingMoves.insert(make_pair(xk-b,yk+a));
  kingMoves.insert(make_pair(xk-b,yk-a));
  //queen moves
  queenMoves.insert(make_pair(xq-a,yq+b));
  queenMoves.insert(make_pair(xq-a,yq-b));
  queenMoves.insert(make_pair(xq+a,yq+b));
  queenMoves.insert(make_pair(xq+a,yq-b));
  queenMoves.insert(make_pair(xq+b,yq+a));
  queenMoves.insert(make_pair(xq+b,yq-a));
  queenMoves.insert(make_pair(xq-b,yq+a));
  queenMoves.insert(make_pair(xq-b,yq-a));
  int equalMove = 0;
  for(auto val:kingMoves){
    if(queenMoves.find(val)!=queenMoves.end()){
      equalMove++;
    }
  }
  cout<<equalMove<<endl;
}

int32_t main()
{
    // #ifndef ONLINE_JUDGE
    //      freopen("input.txt", "r", stdin);
    //      freopen("output.txt", "w", stdout);
    // #endif
    FAST_IO
    AKHLAQ
    {
        solve();
    }
}
/*
  author -> akhlaqhusain
*/
 