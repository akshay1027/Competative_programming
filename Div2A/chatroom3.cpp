#pragma GCC optimize("O2") 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n=a.length(),count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='h')
        {
            for(int j=i+1;j<n;j++)  
            {
                if(a[j]=='e')
                {
                    for(int k=j+1;k<n;k++)
                    {
                        if(a[k]=='l')
                        {
                            for(int s=k+1;s<n;s++)
                            {
                                if(a[s]=='l')
                                {
                                    for(int p=s+1;p<n;p++)
                                    {
                                        if(a[p]=='o')
                                        {
                                            count=1;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(count==1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}