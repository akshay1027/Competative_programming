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
    long long int n, m, mins=0, maxs, i, a, b;
    cin>>n>>m;
    a=n/m;
    b= n- a*m;
    mins+=(a*(a+1)/2)*b;
    b=m-b;
    a--;
    mins+=(a*(a+1)/2)*b;
    a=n-m;
    maxs= a*(a+1)/2;
 
    cout<<mins<<" "<<maxs<<endl;
 
    return 0;
}
 