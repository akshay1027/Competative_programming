#pragma GCC optimize("O2") 
#include<bits/stdc++.h>
#define fasterthanlight ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main()
{   
    fasterthanlight;
    int n;
    cin>>n;

    int j=0,k=0,l=0,a,b[100],c[100],d[100],pro1=1,pro2=1;
    for(int i=0;i<n;i++)
    {
        cin>>a;

        if(a<0)
        {
            b[j]=a; j++;
            pro1=pro1*a;
        }

        else if(a>0)
        {
            c[k]=a; k++;
            pro2=pro2*a;
        }
        else if(a==0)
        {
           d[l]=a; l++;
        }
    }

   //***// 

   if(pro1>0)
   {
        d[l]=b[j-1];
        cout<<(j-1)<<" ";
    for(int i=0;i<j-1;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

    cout<<(k)<<" ";
    for(int i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;

    cout<<(l+1)<<" ";
    for(int i=0;i<l+1;i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;

  }

   //***//

   else if(pro2==1)
  {
        c[1]=b[j-2];
        c[0]=b[j-1];
        cout<<(j-2)<<" ";
    for(int i=0;i<j-2;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

    cout<<(k+2)<<" ";
    for(int i=0;i<k+2;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;

    cout<<(l)<<" ";
    for(int i=0;i<l;i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
  }

  // **** //

  else{

    cout<<j<<" ";
    for(int i=0;i<j;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

    cout<<k<<" ";
    for(int i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;

    cout<<l<<" ";
    for(int i=0;i<l;i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
   }

    return 0;
}
