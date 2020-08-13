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
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  bool b[n+1]={false};

  for(int i=0;i<n;i++)
  {
      if (a[i] > 0 && a[i] <= n)
      {
          b[a[i]]= true;
      }
  }
  for(int i=1;i<=n;i++)
  {
      if(!b[i])
      {
        cout<<i;
        exit(0);
      }
  }
  cout<<n+1;

  return 0;
}