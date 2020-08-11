#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mod 1000000007
#define MAX 1e9
#define MIN -1e9
#define hi "visited\n" //debugging
using namespace std;
 
signed main()
{   
  fastio; 
  int h1,h2,m1,m2;
  char a;

  int hh,mm;
    scanf("%d:%d", &hh,&mm);
    do
    {
        mm++;
        if(mm==60)
        {
            hh++;
            mm=0;
        }
        if(hh==24)
        {
            hh=0;
        }
    }while(hh%10*10+hh/10!=mm);
    printf("%02d:%02d\n",hh,mm);
    return 0;
}
