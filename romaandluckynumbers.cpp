#pragma GCC optimize("O2") 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,temp=0;

    cin>>n>>k;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        //cout<<a[i]<<"#"<<endl;
        int count=0;
        while(a[i]>0)
       {
         int b=a[i]%10; //cout<<b<<"$"<<endl;
         if(b==4||b==7)
           {
              count++;
           }
           a[i]=a[i]/10;
       }
        //cout<<count<<"#"<<endl;
        if(count<=k)
        {
          temp=temp+1;
        }
        //cout<<temp<<"**"<<endl;  
    }
    
    
    cout<<temp;

    return 0;

}
