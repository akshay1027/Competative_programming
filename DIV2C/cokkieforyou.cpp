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
  test{
     ll n,m,a,b;
    cin >> a >> b >> n >> m;
    if(n+m>a+b)
        cout << "NO\n";
    else{
        if(min(a,b)>=m){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
  }
  return 0;
}