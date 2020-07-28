#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,flag=0;
    cin>>n;
    pair<long long int,long long int> a[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);
    for(long long int i=0;i<n-1;i++)
    {
        if(a[i+1].first>a[i].first && a[i+1].second<a[i].second)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"Poor Alex";
    else
    cout<<"Happy Alex";
    return 0;
}