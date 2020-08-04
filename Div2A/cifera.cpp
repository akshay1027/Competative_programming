#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,a,count=0;

    cin>>l>>a;

    for(int i=1;i<=a;i++)
    {
        if(a==pow(l,i))
        {
            count=(i-1);
            cout<<"YES"<<endl;
            cout<<count;
            break;
        }
        else if(a<pow(l,i))
        {
            cout<<"NO";
            break;
        }
    }   
    return 0;
}