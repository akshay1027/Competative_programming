#pragma GCC optimize("O2")
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        string a;
        cin>>a;
        int b;
        b=a.length();
        if(b>10)
        {
          cout<<a[0]<<b-2<<a[b-1]<<endl; //  strings are just like character arrays
        }
        else
        cout<<a<<endl;
    }

    return 0;
}