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
      int n;
      cin>>n;
      int x;
      unordered_set<int> a;

      for(int i=0;i<n;i++)
      {
          cin>>x;
          if(x>0)
          {
          a.insert(x);
          }
      }
       
      a.erase(a.find(0));
      cout<<a.size()<<endl;

      
  }
  return 0;
}




/*int b=a.size();
      if(b==0) cout<<"0"<<endl;
      else if(b<n) 
      {
          cout<<b+1<<endl; }
      else
      {
          cout<<b<<endl; }
          if(n==a.size()) 
          {
              cout<<a.size()<<endl;
          }
          else
          {
              if(a.size()==0) cout<<"0"<<endl;
              else
              cout<<(a.size()+1)<<endl;
          }*/