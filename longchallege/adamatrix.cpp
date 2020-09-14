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
      int n, count=0;
      cin>>n;
      vector<vector<int>> a;

      for(int i=0;i<n;i++)
      {
          vector<int> b;
          for(int j=0;j<n;j++)
          {
              int x;
              cin>>x;
              b.pb(x);
          }
          a.pb(b);
      }
      
      for(int i=n-1;i>0;i--)
      {
          if(a[i][i]!=a[i][i-1]+1)
          {
              count++;
              for(int j=0;j<i+1;j++)
              {
                  for(int k=j;k<i+1;k++)
                  {
                     swap(a[j][k],a[k][j]);
                  }
              }
          }
          else continue;
      }
      cout<<count<<endl;
  }
  return 0;
}