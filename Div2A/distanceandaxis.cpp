#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define ll long long
#define G(x) int x; cin >> x;
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
  int t; cin>>t;
  while(t--)
  {
    int n, k; cin >> n >> k;
		if(k >= n) cout << k-n << "\n";
		else cout << (n-k)%2 << "\n";
  }
  

  return 0;
}