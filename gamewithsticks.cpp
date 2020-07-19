#pragma GCC optimize("O2") 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
      n+m = no. of sticks
      n*m = no. of intersection points
      find? relation between moves and intersection points
      1 3 m    1 3 5 m     1 3 5 a
    */
    int n,m;
    cin>>n>>m;
    
    m=min(n,m);

       if(m%2==0)
        {
            cout<<"Malvika";
        }
        else
        cout<<"Akshat";
    return 0;
}

