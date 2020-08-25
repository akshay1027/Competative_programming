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
  /*a+b>c
   a+c>b
   b+c>a */
   test
   {
       int n;
       cin>>n;
       int a[n];
       for(int i=1;i<=n;i++) 
       { 
           cin>>a[i];
       }

       if((a[1]+a[2]) < a[n]) 
       { 
           cout<<"1 2 "<<n<<endl;
       }
       else cout<<"-1"<<endl;   
   }
   return 0;
}