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
  vector<int> ans;
  int Test[100010];
  int t,n,k;
  test{
     ans.clear();
		cin>>n;
		cin>>Test[0]>>Test[1];
		ans.push_back(Test[0]);
		for (int i=2;i<n;i++){
			cin>>Test[i];
			if ((Test[i-2]>Test[i-1]&&Test[i-1]<Test[i])||(Test[i-2]<Test[i-1]&&Test[i-1]>Test[i])){
				ans.push_back(Test[i-1]);
			}
		}
		ans.push_back(Test[n-1]);
		k=ans.size();
		cout<<k<<'\n';
		for (int i=0;i<k;i++){
			cout<<ans[i]<<' ';
		}
		cout<<'\n';
  }
  return 0;
}