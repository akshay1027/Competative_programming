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
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
                cin>>arr[i];
        int ind1,ind2;
        int mi=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
                if(abs(arr[i]-arr[i+1])<mi)
                {
                        mi=abs(arr[i]-arr[i+1]);
                        ind1=i+1;
                        ind2=i+2;
                }
        }
        if(abs(arr[n-1]-arr[0])<mi)
        {
                ind1=n;
                ind2=1;
        }
        cout<<ind1<<" "<<ind2<<endl;

}  