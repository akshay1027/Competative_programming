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
         string s;
         cin>>s;
         int k,m=0,ans=0,w[26],n=s.length();
         cin>>k;
         for(int i=0;i<26;i++)
         {
             cin>>w[i];
             m=max(m,w[i]);
         }
         for(int i=0;i<n+k;i++)
         {   
             if(i<n)ans+=(i+1)*w[s[i]-'a'];
             else ans+=(i+1)*m;
         }
         cout<<ans<<endl;
    
    return 0;
}