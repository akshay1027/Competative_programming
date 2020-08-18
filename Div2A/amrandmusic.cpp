#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define MAX 1e9
#define MIN -1e9
using namespace std;
 
signed main()
{   
        fastio;
        ll n,k;
    	cin>>n>>k;
    	vector<pair<ll,ll>> v;
    	vector<ll> s;
 
    	for(ll i=0;i<n;i++)
         {
             ll x;cin>>x;
             v.push_back(make_pair(x,i+1));
         }
        ll cnt=0,cn=0;
        sort(v.begin(),v.end());
        for(ll i=0;i<n;i++)
        {
 
                cnt+=v[i].first;
                if(cnt<=k)
                {
                    cn++;
                    //s.push_back(v[i].second);
                }
                else
                break;
        }
        cout<<cn<<endl;
        //for(ll i=0;i<s.size();i++)
        for(ll i=0;i<cn;i++)
            cout<<v[i].second<<" ";
    	return 0;
 
    }