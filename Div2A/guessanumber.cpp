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
    int n;
    cin>>n;
        int mx=-2000000000,mi=2000000000;
        while(n--)
        {
                string s;
                int num;
                char c;
                cin>>s>>num>>c;
                if(s==">=")
                {
                        if(c=='Y')
                        {
                                mx=max(mx,num);
                        }
                        else
                        {
                                mi=min(mi,num-1);
                        }
                }
                else if(s=="<=")
                {
                        if(c=='Y')
                        {
                                mi=min(mi,num);
                        }
                        else
                        {
                                mx=max(mx,num+1);
                        }
                }
                else if(s==">")
                {
                        if(c=='Y')
                        {
                                mx=max(mx,num+1);
                        }
                        else
                        {
                                mi=min(mi,num);
                        }
                }
                else
                {
                        if(c=='Y')
                        {
                                mi=min(mi,num-1);
                        }
                        else
                        {
                                mx=max(mx,num);
                        }
                } 
        }
        if(mx==-2000000000)
                cout<<mx;
        else if(mi==2000000000)
                cout<<mi;
        else if(mx>mi)
                cout<<"Impossible";
        else
                cout<<(mx+mi)/2<<endl;
        return 0;
}