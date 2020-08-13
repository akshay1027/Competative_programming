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
  fastio; int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    if (r1 == r2 || c1 == c2) cout << 1; else cout << 2;
    cout << " ";
    if ((r1 + c1) % 2 != (r2 + c2) % 2) cout << 0; else {
        if (r1 + c1 == r2 + c2 || r1 - c1 == r2 - c2) cout << 1; else cout << 2;
    }
    cout << " ";
    cout << max(abs(r1 - r2), abs(c1 - c2)) << endl;
    return 0;
}