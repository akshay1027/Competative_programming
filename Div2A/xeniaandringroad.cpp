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
  ll n, m, a;
    cin>>n>>m;
    ll cur = 1, ans = 0;
    while(m--){
        cin>>a;
        if(a >= cur)
            ans += a-cur;
        else {
            ans += (n-cur+a);
        }
        cur = a;
        // error(ans);
    }
    cout<<ans;
    return 0;
}