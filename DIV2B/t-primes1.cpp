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
using namespace std;
 
signed main()
{   
  fastio; 
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        ll temp=sqrt(arr[i]);
        if(temp*temp==arr[i] && arr[i]!=1)
        {
            bool flag=true;
            for(int i=2;i*i<=temp;i++)
            {
                if(temp%i==0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag==true)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}