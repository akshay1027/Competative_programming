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
        int cur = n/2;
		int b = cur*(cur+1)/2;
		int sum = n*(n+1)/2;

		if(sum%2)
		{
			cout << "0"<<endl;
			continue;
		}
	

		for( /* */ ;cur<n;cur++)
		{
			if(b < sum/2)
			{
				b += cur+1;
			}
			else
			{
				break;
			}
			
		}
		//int r = sum/2 - cur*(cur-1)/2;
		int count = n - (cur-1);

		cout << count << endl;
	}
	
}