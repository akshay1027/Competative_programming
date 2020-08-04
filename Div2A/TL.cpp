#pragma GCC optimize("O2")
#include<bits/stdc++.h>
using namespace std;
const long long oo=2*1000*1000*1000;
int min0,max0,min1,n,m,ans,x;
 
int main(){ 

  
  scanf("%d%d",&n,&m);
  max0=-oo; min0=min1=oo;
  for (int i=1; i<=n; i++) { scanf("%d",&x); min0=min(min0,x); max0=max(max0,x); }
  for (int i=1; i<=m; i++) { scanf("%d",&x); min1=min(min1,x); }
  ans=max(2*min0,max0);
  if (ans>=min1) { cout<<-1<<endl; return 0; } 
  else if (!ans) cout<<1<<endl; 
  else cout<<ans<<endl;
  
  return 0;
}