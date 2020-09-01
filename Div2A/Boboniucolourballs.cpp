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
  test{
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int count=0;
        if(a%2==0)count++;
        if(b%2==0)count++;
        if(c%2==0)count++;
        int odd=3-count;
        if(count==0||count==3||(count==1&&(a>0)&&b>0&&c>0&&d%2!=0)||(count==2&&d%2==0))
        {
                cout<<"Yes\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
  return 0;
}
