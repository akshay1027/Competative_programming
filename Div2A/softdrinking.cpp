#pragma GCC optimize("O2")
#include<bits/stdc++.h>
using namespace std;
int main()
{ 

   int n, k, l, c, d, p, nl, np;

   cin>>n>> k>> l>> c>> d>> p>> nl>> np;

   int a=(k*l)/nl;
   int b=c*d;
   int f=p/np;

   int a1=min(a,b);
   int a2=min(a1,f);

   int ans=a2/n;

   cout<<ans;
   return 0;
}