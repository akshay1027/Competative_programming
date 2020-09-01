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
     int l,r;
     cin>>l>>r;
     if(2*l<=r)cout<<l<<" "<<2*l<<endl;
     else cout<<-1<<" "<<-1<<endl;
  }
  return 0;
}