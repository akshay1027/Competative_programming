#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define ll long long
#define G(x) ll x; cin >> x;
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define MAX 1e9
#define MIN -1e9
using namespace std;
 
signed main()
{   
  fastio; 
  ll ans;
  G(x) G(y) G(n)
  cin >> x >> y >> n;
 
    if(n%6 == 0) ans = x - y;
    if(n%6 == 1) ans = x;
    if(n%6 == 2) ans = y;
    if(n%6 == 3) ans = y - x;
    if(n%6 == 4) ans = -x;
    if(n%6 == 5) ans = -y;
    cout << (ans % mod + mod)%mod;
 
    return 0;
}
  