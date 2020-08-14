#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	vec v(m+1);
	for(ll i=0;i<m+1;i++)
	cin>>v[i];
	
	ll x= v[m];
	
	int cnt=0;
	for(ll i=0;i<m;i++)
	{
		int y = x^v[i];
		bitset<64> bset(y);
		if(bset.count() <= k) cnt++;
	}
	
	cout<<cnt;
	
	
	
return 0;
}