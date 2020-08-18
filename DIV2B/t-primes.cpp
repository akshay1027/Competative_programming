#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mod 1000000007
#define MAX 1e9
#define MIN -1e9
#define hi "visited\n" //debugging
using namespace std;
 
signed main()
{   
  fastio; 
  int n;
  cin>>n;
  ll a[n];
  for(int i=0;i<n;i++)  cin>>a[i];
  
  for(int i=0;i<n;i++)
  {   
      int count=2;
      for(ll j=2;j<=a[i]/2;j++) 
      {
          if(a[i]%j==0) 
          {
              //cout<<"#"<<j<<"i="<<i<<endl;
              count++;
          }
      }

      if(count==3)  yes;
      else  no;
  }

  return 0;
}