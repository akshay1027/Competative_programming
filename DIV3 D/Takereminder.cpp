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
  test
  {
        ll n,k;
        cin>>n>>k;
        ll x;
        ll ans=0;
        map<ll,ll>m;
        for(ll i=0;i<n;i++)
            {
                cin>>x;
                if(x%k!=0)
                  m[k-(x%k)]++;
        }
        for(auto itr=m.begin();itr!=m.end();itr++)
        {
            ans=max(ans,itr->first+k*(itr->second-1)+1);
        }
         cout<<ans<<"\n";
  }
  return 0;
}