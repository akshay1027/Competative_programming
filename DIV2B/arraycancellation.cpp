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
        vector<ll>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll total=0;
        for(int i=0;i<n;i++){
            if(a[i]>0)
                total+=a[i];
            else if(a[i]<0){
                ll k=min(total,-a[i]);
                // cout<<"in "<<k<<"\n";
                a[i]+=k;
                total-=k;
            }
        }
        // cout<<"\n";
        // for(int i=0;i<n;i++)
        //     cout<<a[i]<<" ";
        // cout<<"\n";
        total=0;
        for(int i=0;i<n;i++){
            if(a[i]<0)
                total+=abs(a[i]);
        }
        cout<<total<<"\n";
  }
  return 0;
}