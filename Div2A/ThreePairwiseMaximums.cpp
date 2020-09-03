#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
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
    int a[2];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if (a[1] != a[2]) {
			cout << "NO" << endl;
		} 
    else 
        {
			cout << "YES" << endl << a[0] << " " << a[0] << " " << a[2] << endl;
		}

  }
  return 0;
}