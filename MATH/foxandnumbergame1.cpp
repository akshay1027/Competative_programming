#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
    int c=0;
    for(int i=0;i<n;i++)
    {
        c=__gcd(c,a[i]);
    }
    cout<<c<<endl;
    cout<<c*n;
}

// if you want to find the minimun possible sum in a given array of number.
// then you have to find the gcd of the first number and second number and store it and again find gcd 
// of next number. and finally multiply final answer with size of array.

/* 
   in math question there is always an optimal solution than the given one in the example!!!!!
*/
