#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m;
cin>>n>>m;
string arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
set <int> toppers;
for(int i=0;i<m;i++)
{
    char max='1';
   
    for(int j=0;j<n;j++)
    {
        char x=arr[j][i];
        if(x>max)
        {
            max=x;
        }
    }
     for(int j=0;j<n;j++)
    {
        char x=arr[j][i];
        if(x==max)
        {
            toppers.insert(j);
        }
    }
}
cout<<toppers.size()<<endl;
 
    
    return 0;
}