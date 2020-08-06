#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mod 1000000007
#define MAX 1e9
#define MIN -1e9
#define hi "visited\n" //debugging
using namespace std;
 
signed main()
{   
    fastio;
    int n;
    map<int, int> freq;
	cin >> n;
    int a[n];
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		freq[a[i]]++;
	}
	int mx = (n + 1) / 2;
	for(auto &it:freq)
	{
		if(it.second > mx)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}