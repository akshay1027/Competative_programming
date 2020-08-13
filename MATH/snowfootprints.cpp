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
        int n; cin>>n;
        string s; cin>>s;
        int ind1=-1,ind2=-1;
        int cnt=0;
        for(int i=0,i<n;i++)
        {
                if(s[i]!='.')
                        cnt++;
                if(s[i]=='L')
                        ind1=i+1;
                if(s[i]=='R')
                        ind2=i+1;
        }
        //cout<<ind1<<' '<<ind2<<endl;
        if(ind1==-1)
        {
                cout<<ind2-cnt+1<<" "<<ind2+1<<endl;
        }
        else if(ind2==-1)
        {
                cout<<ind1<<" "<<ind1-cnt<<endl;
        }
        else
        {
                cout<<ind1-cnt+1<<' '<<ind2<<endl;
        }
        return 0;
}