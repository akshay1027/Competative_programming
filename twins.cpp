#pragma GCC optimize("O2") 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int sum=0,coins=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    sort(a,a+n,greater<int>());
    long long int b=0,left=sum;
    for(int i=0;i<n;i++)
    {
        b=b+a[i];
        coins++;
        left=sum-b;
        if(b>left)
        {
            break;
        }
    }
    cout<<coins;
    return 0;
}