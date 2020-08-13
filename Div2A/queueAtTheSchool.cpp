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
  int n,t;
  cin>>n>>t;
  string s;
    cin>>s;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n-1;j++)
        {   
            if(s[j]=='B' && s[j+1]=='G')
              {  swap(s[j],s[j+1]);
                j++;
              }
        }
    }
    cout<<s<<endl;
  return 0;
}




