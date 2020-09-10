#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define fr(i, a, b) for (ll i = a; i < b; ++i)
#define frn(i, a, b) for (ll i = a; i > b; --i)
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
      ll n,x,y;
    cin>>n>>x>>y;
    ll l = 0, r, d = 0;
    frn(i,n-1,0)
    {
        if((y-x)%i==0)
        {
            r = i;
            d = (y-x)/i;
            break;
        }
    }
    ll st = 0,r1 = x;
    frn(i,n,-1)
    {
        //cout<<r1-d<<endl;
        if(r1-d<=0 || r1-d+(n-1)*d<y)break;
        r1-=d;
    }
    fr(i,0,n)cout<<r1+i*d<<" ";
    cout<<endl;
  }
    return 0;
  }    