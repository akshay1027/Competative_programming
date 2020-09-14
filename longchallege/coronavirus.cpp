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
      vector <int> v;
      vector <int> a;
      vector <int> b;
      int n,flag1=-1,flag2=-1;
      cin>>n;
      for(int i=0;i<n;i++)
      {
          int x;
          cin>>x;
          v.pb(x);
          v.pb(a);
          v.pb(b);
      }
      sort(b.begin(), b.end());
      sort(a.begin(), a.end(), greater<int>());

      for(int i=0;i<n;i++)
      {
          if(v[i]==b[i])
          {   
              flag=1;
          }
          else if(v[i]==a[i])
          {   
              flag=2;
          }
          else 
          {
              flag=0; 
              break;
          }
      }
      if(flag==1) 
      {
          cout<<"1"<<" "<<"1"<<endl;
          continue;
      }

      if(flag==2) 
      {
          cout<<n<<" "<<n<<endl;
          continue;
      }

      if(flag==0)
      {
          if(n==3) 
          {   
              vector<int>::iterator it;
              it = distance(A, max_element(A, A + N))
              if(&it==)

          }
          if(n==4)
          {
              cout
          }
      }





  }