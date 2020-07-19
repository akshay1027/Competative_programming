//wrong answer
#pragma GCC optimize("O2") 
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   int first=0;
   int last=0 , max=-1 , min=a[1];

   for(int i=1;i<=n;i++)
   {   
       cin>>a[i];
       
       if(a[i]>max)
       {   max=a[i];
           first=i;
       }
        else if(a[i]<=min)
       {   
           min=a[i];
           last=i;
       }
   }
   cout<<first<<endl<<last<<endl;

   if(first==n){
      last=last-1;
     }
   int ans = (first-1) + abs(n-(last));
   cout<<ans;
   return 0;

}

