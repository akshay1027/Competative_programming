#include<stdio.h>
int main()
{
	int n,a,b,c,sum1=0,sum2=0,sum3=0;
	cin>>n;
	while(n--){
	  cin>>a>>b>>c;
	  sum1+=a;
	sum2+=b;
	sum3+=c;
	}
	if(sum1==0&&sum2==0&&sum3==0)
	cout<<"YES\n";
	else 
	cout<<"NO\n";
	return 0;
}