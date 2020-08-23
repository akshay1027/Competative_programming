#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define ll long long
#define G(x) ll x; cin >> x;
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define MAX 1e9
#define MIN -1e9
using namespace std;
 
signed main()
{   
         fastio;
         string s,t;
         cin>>s>>t;
         int a[26]={0},b[26]={0};
         for(int i=0;i<s.length();i++)a[s[i]-'a']++;
         for(int i=0;i<t.length();i++)b[t[i]-'a']++;
         //cout<<s[0]-'a'<<" # "<<a[s[1]-'a']++<<endl;
         int p=0,q=1,r=0,j=0;
         for(int i=0;i<s.length();i++)
         {
             if(s[i]==t[j])j++;
             if(j==(t.length()-1))break;
         }
         if(j==(t.length()-1))q=0;
         for(int i=0;i<26;i++)
         {   
             //cout<<a[i]<<"# "<<b[i]<<endl;
             if(a[i]>b[i])p=1;
             else if(a[i]<b[i])r=1;
         }
         if(r==1)cout<<"need tree"<<endl;
         else if(p==1&&q==1)cout<<"both"<<endl;
         else if(p==1)cout<<"automaton"<<endl;
         else cout<<"array"<<endl;
    
    return 0;
}