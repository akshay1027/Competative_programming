#pragma GCC optimize("O2")
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string blank,space;
    cin>>blank>>space;
    int n=blank.length(),count=0;
    for(int i=0;i<n;i++)
    {
        if(blank[i]<91)   // you need not typecaste black[i] to int(blanck[i])
        blank[i]=blank[i]+32;
        if(space[i]<91)
        space[i]=space[i]+32;
    }
    for(int i=0;i<n;i++)
    {
        if(blank[i]>space[i])
        {
            cout<<"1";
            exit(0);      // program ends here
        }
        else if(blank[i]<space[i])
        {
            cout<<"-1";
            exit(0);
        }
    }
    if(space[n]==blank[n])  // strings as character array
    {
        cout<<"0";
    }
    return 0;
}