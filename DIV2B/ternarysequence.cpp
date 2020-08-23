#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define ll long long
#define G(x2) ll x2; cin >> x2;
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
      int x1,x2,y1,y2,z1,z2;
      cin>>x1>>y1>>z1>>x2>>y2>>z2;

      int ans=min(z1,y2)*2;
	  int p=y1-max(y2-z1,0);
      int res=max(p-x2,0);
	  cout<<ans-res*2<<endl;

    /* if(z1<=y2)
      {
         cout<<z1*2<<endl;
      }

      else 
      {
          if(y2==0) cout<<0<<endl;

          else cout<<y2*2<<endl;
      }*/
  }

      return 0;

  }