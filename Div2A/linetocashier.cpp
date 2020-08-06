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

    int n,ans,ans2=MAX,i,j;
    cin>>n; int a[n];

    for(int u=0;u<n;u++)  cin>>a[u];
    
    for( j=0;j<n;j++)
    {
        int sum=0;
    for( i=0;i<a[j];i++)
    {   
        ll x;
        cin>>x;
        sum+=x;
    }
    ans= sum*5 + a[j]*15;
    ans2=min(ans,ans2);
    }

    cout<<ans2;

    return 0;
}