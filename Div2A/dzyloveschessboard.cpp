#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define flon(i,x) for(int i=0;i<x;i++)
#define flan(i,a,x) for(int i=a;i<x;i++)
#define flane(i,a,x) for(int i=a;i<=x;i++)
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
    ll n,m,flag=0,flagy;
    cin>>n>>m;
    string s[n];
    char arr[n+2][m+2];
    for(int i=0; i<n; i++)
        cin>>s[i];
    for(int i=0; i<=n+1; i++)
    {
        flagy=flag;
        for(int j=0; j<=m+1; j++)
        {
            if(flag)
                arr[i][j]='W', flag=0;
            else
                arr[i][j]='B', flag=1;
        }
        flag=!flagy;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(s[i-1][j-1]!='-')
                cout<<arr[i][j];
            else
                cout<<"-";
        }
        cout<<"\n";
    }
    return 0;
}