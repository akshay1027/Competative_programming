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
	cin >> s;
	string s1 = "^";
	size_t found = s.find(s1);
	//cout << found;
	long long lsum = 0, rsum = 0;
	for (long long i = 0; i < s.size(); i++)
	{
		if (i < found)
		{
			if (s[i] - '0' >= 1 && s[i] - '0' <= 9)
				lsum += (s[i] - '0') * (found - i);
		}
		else if (i > found)
		{
			if (s[i] - '0' >= 1 && s[i] - '0' <= 9)
				rsum += (s[i] - '0') * abs(found - i);
		}
	}
	//cout << lsum << " " << rsum;
	if (lsum == rsum)
		cout << "balance";
	else if (lsum > rsum)
		cout << "left";
	else
		cout << "right";

    return 0;
}