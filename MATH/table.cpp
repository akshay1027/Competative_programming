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
  int n,m;
  cin>>n>>m;
  bool flag=0;
  int arr[n+5][m+5];
  for(int i=1;i<=n;i++)
  {
  for(int j=1;j<=m;j++)
  {
  cin>>arr[i][j];
  if((i==1||j==1||i==n||j==m)&&arr[i][j]==1)
  {
   flag=1;
  }
  }
  }
  if(flag==1){
    cout<<2;
  }else{
  cout<<4;
  }
  return 0;
}