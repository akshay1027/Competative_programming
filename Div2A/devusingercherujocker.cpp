#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;

    int a[n],sum=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    
    int c=((n-1)*10)+sum;

    if(c>d)
    {
        cout<<"-1"<<endl;
    }

    else{
        sum=d-sum;
        cout<<sum/5<<endl;
    }

    return 0;
}