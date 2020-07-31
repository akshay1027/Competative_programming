#pragma GCC optimize("O2") 
#include<bits/stdc++.h>
using namespace std;
int ans[4005];
int main()
{
    int n,a,b,c,x,i,j,k;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    int arr[]={0,a,b,c};
    memset(ans,0,sizeof(ans));
    
    ans[a]=1;ans[b]=1;ans[c]=1;
    for(i=1;i<=n;i++)
    {
        x=0;
        for(j=1;j<=3;j++)
        if(i-arr[j]>0)
        x=max(x,ans[i-arr[j]]);
        if(x>0)
        ans[i]=x+1;
    }
    printf("%d\n",ans[n]);
    
    return 0;
}