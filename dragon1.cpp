#include<bits/stdc++.h>
using namespace std;
struct bad
{
  int d;
  int e;
};
bool compare(bad a, bad b)
    {
        if(a.d<b.d)
        return 1;
        return 0;
    }
int main()
{
    long int s;
    int n,count=0;
    cin>>s>>n;
    struct bad c[n];

    for(int i=0;i<n;i++)
    {
        cin>>c[i].d;
        cin>>c[i].e;
    }
    sort(c,c+n,compare);
    for(int i=0;i<n;i++)
    {
        if(s>c[i].d)
        {
            s=s+c[i].e;
            count++;
            if(count!=i+1)
            break;
        }
    }
    if(count==n)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}