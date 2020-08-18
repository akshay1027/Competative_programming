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
         int n,l=-1,r=-1,f=0;
         cin>>n;
         int a[n],b[n];
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
             b[i]=a[i];
         }
         sort(b,b+n);
         for(int i=0,j=n-1;i<n;i++,j--)
         {
             if(a[i]!=b[i]&&l==-1)
                l=i;
             if(a[j]!=b[j]&&r==-1)
                r=j;
             if(l!=-1&&r!=-1)break;
         }
         if(l!=-1&&r!=-1)
         {
             for(int i=l,j=r;i<=r;i++,j--)
             {
                 if(a[i]!=b[j])
                 {
                     f=1;
                     break;
                 }
             }
         }
         if(f==1)cout<<"no"<<endl;
         else
         {
             cout<<"yes"<<endl;
             if(l!=-1&&r!=-1)cout<<l+1<<" "<<r+1<<endl;
             else cout<<1<<" "<<1<<endl;
         }
    }
    return 0;
}