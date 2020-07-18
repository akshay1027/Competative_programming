#pragma GCC optimize("O2") 
#include<bits/stdc++.h>

using namespace std;
int main()
{
    char s[100];
    int i,a[6],j=0,x,cnt=0;
    cin>>s  ;
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]=='h')
        {
            a[j]=i;
            x=i;
            j++;
            break;
        }
    }
    for(i=x+1; i<strlen(s); i++)
    {
        if(s[i]=='e')
        {
            a[j]=i;
            x=i;
            j++;
            break;
        }
    }
    for(i=x+1; i<strlen(s); i++)
    {
        if(s[i]=='l')
        {
            a[j]=i;
            x=i;
            j++;
            break;
        }
    }
    for(i=x+1; i<strlen(s); i++)
    {
        if(s[i]=='l')
        {
            a[j]=i;
            x=i;
            j++;
            break;
        }
    }
    for(i=x+1; i<strlen(s); i++)
    {
        if(s[i]=='o')
        {
            a[j]=i;
            x=i;
            j++;
            break;
        }
    }
    for(i=0; i<j-1; i++)
    {
        if(a[i]<a[i+1])
            cnt++;
    }
    if(cnt==4)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}