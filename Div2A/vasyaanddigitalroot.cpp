#include<bits/stdc++.h>
#pragma GCC optimize(3,"Ofast","inline")
#define Fox ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
const int N=1e5+10;
const int mod=1e9+7;
int k,d;
int main(){ 
	Fox;
	cin>>k>>d;
	if(d==0 && k!=1){
		cout<<"No solution";
		return 0;
	}
	cout<<d;
	k--;
	while(k--)cout<<0;
	return 0;
}