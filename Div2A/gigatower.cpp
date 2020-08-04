#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,d,a;
	cin>>n;
	for (int b = 1; b<=16; ++b)
	{
		a=n+b;
		for (int i = 0; a!=0; ++i)
		{
			d=a%10;
			a=a/10;
			if(d==8||d==-8)
            {
            cout<<b;
            return 0;
            }
		}
	}
}