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
      /*int n; cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	sort(all(vec));
	if (vec.front() == vec.back()) cout << n << "\n";
	else cout << "1\n";*/
    ll n,i,flag=0;
        cin>>n;
        vi a(n);
        for(i=0;i<n;i++)
            cin>>a[i];
        ll x=a[0];
        for(i=1;i<n;i++)
            if(a[i]!=x)
                flag=1;
        if(flag)
            cout<<1<<endl;
        else
            cout<<n<<endl;
  }

  return 0;
}