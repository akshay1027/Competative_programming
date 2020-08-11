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
  int n, k,i=0,j=0,sum=0,count=0;
	cin >> n >> k;
	int list[50];
	while (i<n) {
		list[i] = 2;
		sum += 2;
		i++;
		
	}
	while (sum != k) {
		if (j == n)
			j = 0;
		list[j] += 1;
		sum += 1;
		j++;
	}
	for (int k = 0;k < n;k++) {
		if (list[k] == 2) {
			count += 1;
		}
	}
	cout << count << endl;
	return 0;
}