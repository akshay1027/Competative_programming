#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define flon(i,x) for(int i=0;i<x;i++)
#define flan(i,a,x) for(int i=a;i<x;i++)
#define flane(i,a,x) for(int i=a;i<=x;i++)
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

int nonzero(int n){
    int x=1,sum=0;
    while(n){
        if(n%10!=0){
            sum+=n%10*x;
            x*=10;
        }
       n/=10;
    }
    return sum;
}
int main()
{   
    fastio;
    int a,b;
    cin>>a>>b;
    long long c=a+b;
    if(nonzero(a)+nonzero(b)==nonzero(c))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}