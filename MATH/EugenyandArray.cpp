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
  long int n,m,l,r,sum=0,a,count1=0,count=0;
    cin>>n>>m;
    for(long int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        count1++;
        else
        count++;
    }
    count = 2*min(count1,count);
    // cout<<count<<endl;
    for(long int i=0;i<m;i++)
    {
        cin>>l>>r;
        long int x = r-l;
        // cout<<x<<endl;
        if(x%2==0)
        {
            cout<<"0";
        }
        else
        {
            if(x<count)
            cout<<"1";
            else
            cout<<"0";
        }
        cout<<"\n";
    }
    return 0;
}