//the logic in this is different. This is the not the correct code for this problem.
#pragma GCC optimize("O2") 
#include<bits/stdc++.h>
using namespace std;
int main()
{    
    int n,count=0,count1=0;
    cin>>n;
    int c=n;

    while(n>0)
    {
       int a=n%10;
       count1++;
       if(a==4 || a==7) { 
          count++; 
          cout<<"*"<<endl; 
          }
       else{
          break;
       }
       n=n/10;
       
    }

    if(count==count1){
        cout<<"YES";
        cout<<"*1"<<endl;
    }
    else if(c%4==0)
    {
        cout<<"YES";
        cout<<"**"<<endl;
    }
    else if(c%2==0 && c%7==0){
        cout<<"yes";
        cout<<"***"<<endl;
    }
    else{
        cout<<"NO";
        cout<<"*0"<<endl;
    }

    return 0;
}