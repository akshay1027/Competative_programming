#pragma GCC optimize("O2") 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t],c ,b,min,max,ans=0;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(i==0)
        {
            min=a[0]; b = 0 ;
            max=a[0]; c = 0 ;
        }
        if(a[i]>max)
        {
            max=a[i];
            c=i;
        }
        else if(a[i]<=min)
        {
            min=a[i];
            b=i;
        }
    }
        if(c>b)
        {
            ans=t-2+(c-b);
        }
        else
        {
            ans=t-1+(c-b);
        }
        cout<<ans;
    return 0;
}