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
      int r1,r2,c1,c2,d1,d2;
        cin>>r1>>r2;
        cin>>c1>>c2;
        cin>>d1>>d2;
        int a=(r1-d2+c1)/2;
        int c=c1-a;
        int d=d1-a;
        int b=c2-d;
        if(a+b!=r1 || a+c!=c1 || b+c!=d2 || a+d!=d1 || b+d!=c2 || c+d!=r2 || a==b || c==d || a==c || a==d || b==c || b==d)
        {
                cout<<"-1";
                return 0;
        }
        else if(a>9 || b>9 || c>9 || d>9 || a<1 || b<1 || c<1 || d<1)
        {
                cout<<"-1";
                return 0;
        }     
        else
        {
                cout<<a<<" "<<b;
                cout<<endl;
                cout<<c<<" "<<d;
        }
        return 0;
}