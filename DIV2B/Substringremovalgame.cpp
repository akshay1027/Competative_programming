#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define ll long long
#define G(x) ll x; cin >> x;
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define MA 2e5+10
#define MIN -1e9
using namespace std;
int MAX = 2e5+10;
 
bool cmp (int a,int b)  
{
  return a>b;
}
signed main()
{  
  int a[MAX];
  fastio;
  test{

      string s;
      cin>>s;
      int b=s.length(); 
      int count=0;

      for(int i=0;i<b;i++)
      {
          if(s[i]=='1') 
          {
              int j,flag=0;
              for(int j=i;j<b;j++)
              {
                  if(s[j]!='1') break;
                  flag++;
              }
              a[++count]=flag;
              i=j;
          }
      }

      sort(a+1,a+1+count,cmp);
      ll ans=0;
      for(int i=1;i<=count;i+=2) ans+=a[i];

      cout<<ans<<endl;
  }

  return 0;
}