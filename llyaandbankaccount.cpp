#pragma GCC optimize("O2") 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n>0)
    {
        cout<<n;
    }

    else
    {
        int a,b;
        b=(n/100)*10 + n%10;
        a=n/10;
        cout<<max(b,a);
    }
    return 0;
}

    