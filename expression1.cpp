#pragma GCC optimize("O2")
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans[6];
    ans[0]=a+b*c;
    ans[1]=a*(b+c);
    ans[2]=a*b*c;
    ans[3]=(a+b)*c;
    ans[4]=a+b+c;
    ans[5]=a*b+c;
    sort(ans,ans+6);
    cout<<ans[5];
    return 0;
}