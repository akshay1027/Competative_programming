#pragma GCC optimize("O2") 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , c;
    cin>>n>>c;
    int a[n];
    int max=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++)
    {
        int j=i+1;

        if(a[i]-a[j]>max)
        {
           max=a[i]-a[j];
        }
    }
    
    if(max>c)
    cout<<max-c;

    else
    cout<<"0";

    return 0;
}    
