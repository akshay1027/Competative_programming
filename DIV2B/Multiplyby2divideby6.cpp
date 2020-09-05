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
        int x=0,y=0;
        while(n%3==0)n=n/3,x++;
        while(n%2==0)n=n/2,y++;
        if(n>1||y>x)cout<<-1<<"\n";
        else{
            if(y==x)cout<<x<<"\n";
            else
                cout<<x+(x-y)<<"\n";
        }
  }
  return 0;
}