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
using namespace std;
 
signed main()
{   
  fastio; 
  string a;
  cin>>a;
  int even=MAX;
  int odd=MIN;
  int even_index,odd_index,count=0;
  int n=a.length();

  for(int i=0;i<n-1;i++)
  {
      if((a[i]%2-'0')==0)
      {   
          cout<<"#"<<a[i]<<endl;
          if(a[i]>even)  
          { 
            even=a[i];
            even_index=i;
            count++;
          }
      }

      else if((a[i]%2-'0')!=0)
      {
          if(a[i]<odd)
          {
              odd=a[i];
              odd_index=i;
          }
      }
  }

  //if(count==0) cout<<"-1";

  //else if(count!=0)
  {  
      swap(a[odd_index],a[even_index]);
      cout<<a;
  }

  return 0;
}