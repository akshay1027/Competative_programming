#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n,i,j,tot;
	cin>>n; n--; tot=n;
	for(i=2;i<=n;i++){
		bool cek=true;
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				cek=false; break;
			}
		}
		if(cek && n%i==0) tot=(tot*(i-1))/i;
	}
	cout<<tot<<endl;
	return 0;
}
