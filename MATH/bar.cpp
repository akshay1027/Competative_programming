#include<bits/stdc++.h>
using namespace std;
 
int main(){
	string s;
	int n,tot=0;
	cin>>n;
	while(n--){
		cin>>s;
		if(isdigit(s[0])){
			int num=stoi(s);
			if(num<18) tot++;
		}
		else if(s=="ABSINTH" || s=="BEER" || s=="BRANDY" || s=="CHAMPAGNE" || s=="GIN" || s=="RUM" || s=="SAKE" || s=="TEQUILA" || s=="VODKA" || s=="WHISKEY" || s=="WINE") tot++;
	}
	cout<<tot<<endl;
	return 0;
}