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
     ll l,r,m;
     cin>>l>>r>>m;
     if(m<l)
        {
                 cout<<l<<" "<<l<<" "<<l*2-m<<endl;
        }
        else
        for(ll i=l;i<=r;i++)
        {
                //cout<<i<<endl;
                if(m%i<=(r-l))
                {
                        cout<<i<<" "<<l+m%i<<" "<<l<<endl;
                        break;
                }
                else if(i-(m%i)<=(r-l))
                {
                        cout<<i<<" "<<l<<" "<<l+i-(m%i)<<endl;
                        break;
                }
        }
     
  }
  return 0;
}