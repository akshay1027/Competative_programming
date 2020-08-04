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
    ll n;
	cin>>n;
	string s;
 
	unordered_map<string,int> m;
	while(n--){
		cin>>s;
		m[s]++;
	}
	int k=INT_MIN;
	string ans;
	for(auto i:m){
		if(i.second>k){
			k=i.second;
			ans=i.first;
		}
	}
	cout<<ans<<endl;
    return 0;
} 