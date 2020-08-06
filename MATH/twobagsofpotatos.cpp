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
    long long int a,b,c;
    bool d=false;
    cin>>a>>b>>c;
    for(int i=1;i*b<=c;i++)
    {
        if(b*i>a) {cout<<b*i-a<<" "; d=true;}
    }
    if(d==false) cout<<-1<<endl;
    else cout<<endl;
    return 0;
}