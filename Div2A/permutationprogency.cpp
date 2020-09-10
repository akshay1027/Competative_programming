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
  {     int n;
        cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        reverse(a.begin(), a.end());
        for(int x : a) cout << x << ' ';
        cout << '\n';
  }
  return 0;
}