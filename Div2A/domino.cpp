#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
	int n, a, b, s1 = 0, s2 = 0,sd = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		s1 += a;
		s2 += b;
		if (a % 2 != b % 2)
			sd++;
	}
	if (s1 % 2 == 0 && s2 % 2 == 0)
	{
		cout << 0;
	}
	else if (s1 % 2 != s2 % 2)
	{
		cout << -1;
	}
	else {
		if (sd > 0)
			cout << 1;
		else
			cout << -1;
	}
	return 0;
}