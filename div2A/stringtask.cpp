#pragma GCC optimize("O2")
#include<bits/stdc++.h>
using namespace std ;

int main()
{
    string a;
    cin>>a;

    int n = a.length();
    char b;

    for(int i=0;i<n;i++)
    {
        if(isupper(a[i]))
        {
          a[i]=tolower(a[i]);
        }
    }    

    for(int i=0;i<n;i++)
    {
        if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' )  //bcoz vowels need not be printed
        {
            cout<<"."<< a[i];
        }
    }
    return 0;
}