#include <bits/stdc++.h>
#define ll   long long int
#define endl '\n'
#define M    1000000007
#define D    998244353
#define PI   3.14159265
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests=1;
    //cin>>tests;
    while(tests-->0)
    {
         int n,m;
         cin>>n>>m;
         map<string,string> ma;
         for(int i=0;i<m;i++)
         {
             string a,b;
             cin>>a>>b;
             if(a.length()<=b.length())
             {
                 ma[b]=a;
                 ma[a]=a;
             }
             else
             {
                 ma[a]=b;
                 ma[b]=b;
             }
         }
         for(int i=0;i<n;i++)
         {
             string s;
             cin>>s;
             cout<<ma[s]<<" ";
         }
    }
    return 0;
}