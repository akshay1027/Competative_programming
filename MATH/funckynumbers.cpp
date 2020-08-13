#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
	long long a[50001];
	bool found=false;
	int n,i;
	cin>>n;
	a[0]=0;
	for(i=1;i<50001;i++) a[i]=i*(i+1)/2;
	for(i=1;i<50001;i++){
		if(binary_search(a+1,a+50001,n-a[i])){
			cout<<"YES"<<endl; found=true; break;
		}
	}
	if(!found) cout<<"NO"<<endl;
	return 0;
}
