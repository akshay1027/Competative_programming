#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define ll long long
#define G(x) ll x; cin >> x;
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
        int n;
        test
       {
        int n;
        int a[100001];
		cin>>n;
		string s;
		cin>>s;
		for(int i=0;i<n;i++)a[i+1]=s[i]-'0';
		map<int,ll>mp;
		mp[0]=1;
		ll ans=0;
		for(int i=1;i<=n;i++){
			a[i]+=a[i-1];
            cout<<a[i]<<"#"<<endl;
			ans+=mp[a[i]-i];
            cout<<ans<<"&"<<endl;
			mp[a[i]-i]++;
            cout<<mp[a[i]-i]<<"*"<<endl;
           
		}
		cout<<ans<<'\n';
        }
    return 0;
}