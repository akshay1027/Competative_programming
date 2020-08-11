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
  int n,count=0;
  cin>>n;
  int a[n],b[n],c[n];

  for(int i=0;i<n;i++){
      cin>>a[i]>>b[i]>>c[i];
  }

  for(int i=0;i<n;i++){
      if(a[i]==b[i] && a[i]!=0)
      {  
        count++;
      }
      else if( a[i]==c[i] && a[i]!=0)
      { 
        count++;
      }
      else if( b[i]==c[i] && b[i]!=0)
      { 
        count++;
      }
  }

  cout<<count;
  return 0;
}
