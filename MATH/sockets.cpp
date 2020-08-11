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
  int n,m,k;
        cin>>n>>m>>k;
        int arr[n];
        re(i,n)
        {
                cin>>arr[i];
        }
        sort(arr,arr+n,greater <int>());
        int sum=k;
        int cnt=0;
        int i=0;
        while(sum<m && i<n)
        {
                sum--;
                sum+=arr[i];
                i++;
                cnt++;
        }
        if(sum>=m)
                cout<<cnt<<endl;
        else
                cout<<"-1";
        return 0;
}