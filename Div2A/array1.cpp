#include<bits/stdc++.h>
#define fasterthanlight ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define endl "\n"
#define int long long
#define vi vector<int>
#define pb push_back
#define mod 1000000007
#define MAX 1e9
#define MIN -1e9
#define hi "visited\n" //debugging
using namespace std;
 
signed main()
{
	fasterthanlight;
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	vi a, b, c;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			c.pb(arr[i]);
		}
		else if (arr[i] > 0)
		{
			b.pb(arr[i]);
		}
		else
		{
			a.pb(arr[i]);
		}
	}
	if (b.empty())
	{
		b.pb(a.back());
		a.pop_back();
		b.pb(a.back());
		a.pop_back();
	}
	if (a.size() % 2 == 0)
	{
		c.pb(a.back());
		a.pop_back();
	}
	cout << a.size() << " "; for (int i : a)cout << i << " "; cout << endl;
	cout << b.size() << " "; for (int i : b)cout << i << " "; cout << endl;
	cout << c.size() << " "; for (int i : c)cout << i << " "; cout << endl;
 
	return 0;
}