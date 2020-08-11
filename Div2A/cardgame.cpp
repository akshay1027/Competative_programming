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
        char trump;
        string a,b;
        cin>>trump;
        cin>>a>>b;
        map <char,int> m;
        m['6']=1;
        m['7']=2;
        m['8']=3;
        m['9']=4;
        m['T']=5;
        m['J']=6;
        m['Q']=7;
        m['K']=8;
        m['A']=9;
        if(a[1]!=b[1] && a[1]!=trump && b[1]!=trump)
                cout<<"NO";
        else if(a[1]==trump && b[1]==trump)
        {
                if(m[a[0]]>m[b[0]])
                        cout<<"YES";
                else
                        cout<<"NO";
        }
        else if(a[1]==trump)
                cout<<"YES";
        else if(b[1]==trump)
                cout<<"NO";
        else if(m[a[0]]>m[b[0]])
                cout<<"YES";
        else
                cout<<"NO";
        return 0;
}