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

  long long int n;
	cin>>n;
	long long int arr[n];
	long long int ans=n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];	
	}
	ans+=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[i-1])
		{
			ans++;
			ans=ans+arr[i]-arr[i-1];
		}
		if(arr[i]==arr[i-1])
		{
			ans++;
		}
		if(arr[i]<arr[i-1])
		{
			ans++;
			ans=ans+arr[i-1]-arr[i];
		}
		
	}
	cout<<ans;
 
 return 0;
}
