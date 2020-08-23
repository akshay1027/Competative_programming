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
    int n, s, t;
	cin >> n >> s >> t;
	int p[n];
	for(int i = 0;i < n;i++){
		cin >> p[i];
	}
	if(t == s){
		cout << 0 << "\n";
		return 0;
	}
	int count = 1;
	int x = p[s-1];
	while(x != t) {
		if(x == s) {
			cout << -1 << endl;
			return 0;
		}
		count++;
		x = p[x - 1];
	}
	cout << count << endl;
	return 0;
} 
