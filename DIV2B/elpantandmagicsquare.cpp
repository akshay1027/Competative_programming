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
    int a[3][3];
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
            sum+=a[i][j];
        }
    }
    sum/=2;
    a[0][0]=sum-a[0][1]-a[0][2];
    a[1][1]=sum-a[1][0]-a[1][2];
    a[2][2]=sum-a[2][0]-a[2][1];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}