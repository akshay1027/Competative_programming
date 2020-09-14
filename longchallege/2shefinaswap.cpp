#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long int

ll* swap2( vector <ll> arr ,ll l ,ll h )
{   
    cout<<l<<"&"<<endl;
	if(l==h)
		return arr;
	else
	{
		for(ll i=0 ; i<h ; i++)
		{
			swap(arr[i],arr[l]);
		    swap2(arr,l+1,h);
			swap(arr[i],arr[l]);
		}
	}
}

ll partision(vector<int> arr , ll n , ll count)
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
	fastio;

    ll t;
	cin >> t;
	while(t--) 
	{   
	    ll n,i,j;
		cin>>n;
		vector<ll> v(n);
		vector<ll> arr(n);
		for(i=0;i<n;i++)
			arr[i]=i+1;
		////firstly permute or reaarange digits i.e. swaps two 
	    swap2(arr,v,n);
		///then cheak partision works or no(arr,n,0);
        
		////print count i.e. no. of paritsion when swapping between 2 is done. 
		cout<<partision(arr,n,0)<<"\n";
	
	}

return 0;

}