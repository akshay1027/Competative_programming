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
	int n,sum=0;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
  
    sort(arr, arr+n, greater<int>()); 
    int x=arr[0];
    int cnt = 1000;
    while(cnt --)
    for(int i = 0; i < n; i ++) 
    {
        for(int j = 0; j < n; j ++) 
        {
            if(arr[i] > arr[j]) 
            {
                arr[i] -= arr[j];
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    cout<<sum;
    return 0;
}

