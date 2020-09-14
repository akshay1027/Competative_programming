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
          cout<<"& "<<endl;
          int i=1,j=ceil(n/2);
          cout<<j<<"&"<<endl;
          { 
            
             ll b=j*(j+1)/2;
             ll c=(n*(n+1)/2)-b;
             cout<<"b= "<<b<<"c= "<<c<<endl;
            g : if(i<=ceil(n/2) && j<=n)
             {
                //swap(i,j);
             b=b-i+j;
             c=c-j+i;
             cout<<b<<"& "<<c<<endl;
             if(b==c) 
             { 
                count++;
                i++;
                j++;
                goto g;
             }

             else
             {
               j++;
               goto g;
             }
             }
          }
          cout<<count<<endl;
      }
  }
  return 0;
}