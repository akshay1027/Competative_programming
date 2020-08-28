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
      ll n,k;
		cin >> n >> k;
		ll a[n],maxi=MIN;
		for(ll i=0;i<n;i++){
			cin >> a[i];
			maxi=max(maxi,a[i]);
		}
		ll maxi2=MIN;
		for(ll i=0;i<n;i++){
			a[i]=maxi-a[i];
			maxi2=max(maxi2,a[i]);
		}
		if(k%2){
			for(ll i=0;i<n;i++) cout << a[i] << " ";
			cout << "\n";
			continue;
		}
		for(ll i=0;i<n;i++){
			a[i]=maxi2-a[i];
			cout << a[i] << " ";
		}
		cout << "\n";
  }

  return 0;
}