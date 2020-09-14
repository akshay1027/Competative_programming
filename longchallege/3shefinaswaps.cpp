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

int sum1(int n1)
{
    return n1*(n1+1)/2;
}
 
signed main()
{   
  fastio; 
  test
  {
      int n,count=0;
      cin>>n;
      ll a= (ll) n*(n+1)/2;
      if(a%2!=0)
      {
          cout<<"0"<<endl;
          continue;
      }
      else
      {
          vector<ll> arr(n);
          int j;
		  for(int i=1;i<=n;i++)
			arr[i]=i;
          for(int i=1;i<=n;i++)
          {   
              if(i==1)
               j=ceil(n/2);
              swap(arr[i],arr[j]);
              if((sum1(j)-arr[i]+arr[j])==sum1(n-j)-arr[j]+arr[i])
              {
                  count++;
                  j++;
              }
          } 
          cout<<count<<endl;

      }
  }
  return 0;
}