#pragma GCC optimize("O2") 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],b[n],c[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
    {
         
        if(b[i]<=k)
        {
            c[i]=a[i];
        }
        else 
        {
            c[i]=(a[i]-(b[i]-k));
            
        } 
    }
    
    sort(c,c+(n));
    cout<<c[n-1];
    return 0;
}