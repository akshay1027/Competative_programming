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
    string s;
    pair<int,string> p[5];
    for(int x=0; x<4; x++){
        cin>>s;
        p[x]=make_pair(s.size()-2,s);
    }
    sort(p,p+4);
    for(int x=0; x<4; x++){
        cout<<p[x].second[0]<<endl;
    }
    int b=-1;
    if(p[1].first/2 >=p[0].first)b=0;
    if(p[3].first/2 >=p[2].first) {if(b==0) b=-1; else b=3;}
    if(b==-1) cout<<'C';
    else cout<<p[b].second[0];
        return 0;
        
}
