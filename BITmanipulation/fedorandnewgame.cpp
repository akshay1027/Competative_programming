#include<bits/stdc++.h>
using namespace std;
string decToBin(int n) 
{ 
    if (n == 0) 
        return "0"; 
      
    // to store the binary equivalent of decimal 
    string bin = "";     
    while (n > 0)     
    { 
        // to get the last binary digit of the number 'n' 
        // and accumulate it at the beginning of 'bin' 
        bin = ((n & 1) == 0 ? '0' : '1') + bin; 
          
        // right shift 'n' by 1 
        n >>= 1; 
    } 
      
    // required binary number 
    return bin; 
} 
int main()
{
	long n,m,k;
	cin>>n>>m>>k;
	vector <long> x(m+1);
	for(long i=1;i<=m+1;i++)
	{
		cin>>x[i-1];
	}
	long count=0;
	for(long i=0;i<m;i++)
	{
		long c=0;
		long res=x[i]^x[m];
		string s=decToBin(res);
		for(long j=0;j<s.size();j++)
		{
			if(s[j]=='1')
			c++;
		}
		if(c<=k)
		{
			count++;
		}
	}
	cout<<count<<endl;
	
	return 0;
}