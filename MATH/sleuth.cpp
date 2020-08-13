#include<bits/stdc++.h>
using namespace std;
 
int main(){
	string s;
	getline(cin,s);
	int last=s.find('?')-1;
	while(s[last]==' ') last--;
	if(s[last]=='a' || s[last]=='i' ||  s[last]=='u' ||  s[last]=='e' ||  s[last]=='o' ||  s[last]=='y') cout<<"YES"<<endl;
	else if(s[last]=='A' || s[last]=='I' ||  s[last]=='U' ||  s[last]=='E' ||  s[last]=='O' ||  s[last]=='Y') cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}