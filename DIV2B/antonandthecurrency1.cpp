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
         int f=-1,n=s.length(),mi=0;
         for(int i=0;i<(n-1);i++)
         {
             if(((s[i]-'0')%2==0)&&s[i]<s[n-1])
             {
                 swap(s[i],s[n-1]);
                 f=1;
                 break;
             }
             else if(((s[i]-'0')%2==0))
             {
                 mi=i;
                 f=2;
             }
         }
         if(f==2)swap(s[mi],s[n-1]);
         if(f==-1)cout<<-1<<endl;
         else cout<<s<<endl;
    
    return 0;
}