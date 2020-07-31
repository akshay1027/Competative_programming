#pragma GCC optimize("O2")
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],i,x,y,b,c,d;
    for(i=0;i<3;i++)
        cin>>a[i];
        
    if(a[0]==1&&a[2]==1){
        cout<<2+a[1];
    }
    else if(a[0]==1){
        cout<<(a[0]+(a[1]))*a[2];
    }
    else if(a[1]==1){
            x=a[0]+a[1];
            y=a[1]+a[2];
            b=x*a[2];
            c=a[0]*y;
            d=max(b,c);
            cout<<d;
    }
    else if(a[2]==1){
        cout<<a[0]*((a[1])+a[2]);
    }
    else
        cout<<a[0]*a[1]*a[2];
    return 0;
}