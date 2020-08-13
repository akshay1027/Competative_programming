#include <bits/stdc++.h> 
using namespace std; 
#define in(x) int x; cin>>x;
#define sin(s) string s; cin>>s;
#define ll long long int 
#define lin(x) ll x; cin>>x;
#define vi vector<int>
#define si set<int>
#define pb push_back
#define re(i,n) for(int i=0; i<n; i++)
#define pe(i,a,b) for(int i=a; i<=b; i++)
#define rre(i,n) for(int i=n-1; i>-1; i--) 
#define mp make_pair
#define pii pair<ll,ll>
#define endl "\n"
#define pi 3.1415926536 
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 998244353 
 
bool compare(const pair<int, int>&i, const pair<int, int>&j) 
{ 
        return i.first< j.first; 
} 
 
 
int main()
{
        vi x,y;
        int p=1;
        while(p<101)
        {
                x.pb(p);
                x.pb(p);
                x.pb(-p);
                x.pb(-p);
                p++;
        }
        y.pb(0);
        pe(i,1,x.size()-1)
        {
                y.pb(x[i-1]);
        }
        in(a)
        in(b)
        if(!a && !b)
        {
                cout<<"0";
                cout<<endl;
        }
        re(i,x.size())
        {
                if(x[i]==a && y[i]==b)
                {
                        cout<<i;
                        return 0;
                }
                if(x[i]==a)
                {
                        if(b>min(y[i],y[i+1]) && b<=max(y[i+1],y[i]))
                        {
                                cout<<i+1;
                                return 0;
                        }
                }
                if(y[i]==b)
                {
                        if(a>min(x[i],x[i+1]) && a<=max(x[i+1],x[i]))
                        {
                                cout<<i+1;
                                return 0;
                        }
                }
        }
        return 0;
}
