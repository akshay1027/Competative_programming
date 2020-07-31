#pragma GCC optimize("O2")
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int m,i,j,n, p,q,flag = 0;
    cin>>n;
    cin>>p;
    int x[p], a[n];
    for(i=0; i<p; i++)
    {
        cin>>x[i];
        m = x[i];
        a[m] = 1;
    }
    cin>>q;
    int y[q];
    for(i=0; i<q; i++)
    {
        cin>>y[i];
        m = y[i];
        a[m] = 1;
    }
    for(i=1; i<=n; i++)
    {
        if(a[i]==1)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if(flag==1)
        cout<<"I become the guy.\n";
    else
        cout<<"Oh, my keyboard!\n";
    return 0;
}