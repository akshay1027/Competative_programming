#include <bits/stdc++.h>
using namespace std;
#define ll long long int

arr* permute(ll vector<ll> &arr(n) ,ll l ,ll h )
{
	if(l==h)
		return arr;
	else
	{
		for(ll i=0 ; i<h ; i++)
		{
			swap(arr[i],arr[l]);
			permute(arr,l+1,h);
			swap(arr[i],arr[l]);
		}
	}


}

ll cheakpartision(vector<int> &arr(n) , ll n , ll count)
{
	///  cheak right or left sum if they are equal then count++
	ll i , ll j;
	
		ll leftsum=0;
		for(i=0 ; i<n ; i++)
		{
			leftsum += arr[i];

			ll rightsum=0;
			for(j=n-1 ; j>i ; j--)
				rightsum+=arr[j];

			if(rightsum==leftsum)
				count++;
		}
	return count;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    ll t;
	cin >> t;
	while(t--) 
	{   
        ll count;
	    ll n,i,j;
		cin>>n;
		vector<ll> v(n);
		vector<ll> arr(n);
		for(i=0;i<n;i++)
			arr[i]=i+1;
		////firstly permute or rearrange digits i.e. swaps two 
		permute(arr,v,n);
		///then cheak partision works or not
		cheakpartision(arr,n,0);
		////print count i.e. no. of paritsion when swapping between 2 is done. 
		cout<<count<<"\n";
		
		/////cheak the output be ready.
	}

return 0;

}