#pragma GCC optimize("O2") 
//libraries begin
#include<bits/stdc++.h>
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
#include<set>
#include<iterator> 
#include <cctype>
//libaries end
 
 
//selfddefined macros begin
#define fio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define forn(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define s_s stable_sort 
#define endl "\n"
#define bs(a,x) binary_search(a.begin(),a.end(),x)
#define pb push_back
#define testcases int t; cin>>t; while(t--)
#define int long long
typedef unsigned long long ull;
typedef long long ll;
//selfdefined macros end
 
using namespace std;
int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
bool isPrime(int n){
    if(n < 2)
        return false;
    if(n < 4)
        return true;
    if(n % 2 == 0 or n % 3 == 0)
        return false;
    for(int i = 5; i*i <= n; i += 6)
        if(n % i == 0 or n % (i+2) == 0)
            return false;
    return true;
}
 
/*getting all factors of x
  for(int i=1 ; i*i<=x ; i++){
	        if(x%i == 0){
	            v.push_back(i);
	            if(i*i != x)
	                v.push_back(x/i);
	        }
	    }*/
void swap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
}
 
int sumdigits(int x)
{
    int sum=0;
    while(x)
    {
        int t=x%10;
        sum+=t;
        x/=10;
    }
    return sum;
}
 
bool norep(int x)
{
    map<int,int> m;
    while(x)
    {
        int t=x%10;
        m[t]++;
        if(m[t]>1)
        return false;
        x/=10;
    }
    return true;
}
 
 
const int N=2e5+5;
int32_t main()

/* another on */


#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <string.h>
#include <cassert>
#include <climits>
#include <ctime>
 
using namespace std;
 
const int oo = int(2e9) + 9;
const double eps = 1e-9;
const double pi = 3.14159265358979323846264338327950;
 
#define debug printf("ERROR DETECTED...!!\n");
#define debug1(p)        cerr << #p << ": " << p << endl;
#define debug2(p, q)     cerr << #p << ": " << p << " | " << #q << ": " << q << endl;
#define debug3(p, q, r)  cerr << #p << ": " << p << " | " << #q << ": " << q << " | " << #r << ": " << r << endl;
 
#define  takeinput() freopen("ip","r",stdin);
#define  takeoutput() freopen("op","w",stdout);
#define  takein(c) freopen(c,"r",stdin)
#define  takeout(c) freopen(c,"w",stdout);
 
typedef vector < int > vi;
typedef pair < int, int> ii;
typedef vector < ii > vii;
 
#define trvi(c, it) for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define trvii(c, it) for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
 
typedef long long int64;
typedef unsigned long long uint64;
typedef double float64;