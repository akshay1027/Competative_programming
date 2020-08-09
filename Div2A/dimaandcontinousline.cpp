#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
int main(){
   ll n,x[1005],x1,x2,x3,x4;
   cin>>n;
   for(int i=0;i<n;i++) cin>>x[i];
   for(int i=1;i<n;i++){
      x1=min(x[i-1],x[i]);
      x2=max(x[i-1],x[i]);
      for(int j=i+1;j<n;j++){
         x3=min(x[j-1],x[j]);
         x4=max(x[j-1],x[j]);
         if((x1<x3 && x3<x2 && x2<x4) || (x3<x1 && x1<x4 && x4<x2)){
            cout<<"yes";
            return 0;
         }
      }
   }
   cout<<"no";
   return 0;
}