#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
 
using namespace std;
 int main(){
    int n;
     int l,m;
    
    cin>>n>>l;
    int v[n];
    for(int j=0;j<n;j++){
        cin>>v[j];}
    sort(v,v+n);
    m=2*max(v[0],l-v[n-1]);
    for(int i=0;i<n-1;i++){
        m=max(m,v[i+1]-v[i]);
    }
    
    printf("%0.10lf",m/2.0);
     return 0;
 }