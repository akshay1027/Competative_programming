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
      int k = 0, m = 1000000000, n;

	cin >> n;
    int a[n],b[n];
	for(int i = 0; i < n; i++)
	{
	    cin >> a[i];
            b[i] = a[i];
	    m = min(m, a[i]);
	}

        sort(b, b + n);

	for(int i = 0; i < n; i++)
	    if(a[i] != b[i] && a[i] % m != 0)
		k = 1;

	if(k)
	    cout<<"NO"<<endl;
	else
	    cout<<"YES"<<endl;
    }

  }

  return 0;
}