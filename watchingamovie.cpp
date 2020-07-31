#pragma GCC optimize("O2") 
#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int t = 0;
    int l, r, n, m, x;
    cin>>n>>x;
    int sum ;
    int temp =0;
    for(int i=1; i<=n; i++)
    {
        cin>>l>>r;
        sum = 0;
        while(1)
        {
             t = t+x;
             if(t>=l)
             {
                 t = (t-x);
                 sum = sum + (r-t);
                 t = t+sum; //because t is the current point. so we gte sum and update it in temp.
                 break;
             }
        }
        temp = temp +sum;
    }
    cout<<temp;
    return 0;
}


