#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define ll long long
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
  long double r,x1,y1,x2,y2,d;
         cin>>r>>x1>>y1>>x2>>y2;
         d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)); // distance between the circles from its centre.
         cout<<ceil(d/(2*r))<<endl;
    
    return 0;
}