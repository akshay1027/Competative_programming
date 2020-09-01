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
      int n; cin >> n;
        int x = (n + 3) / 4;
        for (int i = 0; i < n - x; ++i) {
            cout << 9;
        }
        for (int i = 0; i < x; ++i) {
            cout << 8;
        }
        cout << endl;
  }
  return 0;
}