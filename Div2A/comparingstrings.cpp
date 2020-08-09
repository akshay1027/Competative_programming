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
  int a,b,c,i,j,n,l,temp=0,ans1f,ans1s,ans2f,ans2s;
	string ab,bc;
	cin>>ab;
	cin>>bc;
	n = ab.size();
	l = bc.size();
	if(n!=l) {
		cout<<"NO";
		return 0;
	}
	for(i=0;i<n;i++){
		if(ab[i]!=bc[i]) temp++;
		if(temp==1){
			ans1f=ab[i];
			ans1s=bc[i];
			temp++;
		}
		else if(temp==3){
			ans2f = ab[i];
			ans2s = bc[i];
			temp++;
		}
 
 
	}
	if(temp==4){
		if(ans1f==ans2s && ans1s==ans2f) cout<<"YES";
		else cout<<"NO";
	}
	else cout<<"NO";
}