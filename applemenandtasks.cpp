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
 
using namespace std;
 
const int oo = int(2e9) + 9;
const double eps = 1e-9;
const double pi = 3.14159265358979323846264338327950;
 
#define debug printf("ERROR DETECTED...!!\n");
#define debug1(p)        cerr << #p << ": " << p << endl;
#define debug2(p, q)     cerr << #p << ": " << p << " | " << #q << ": " << q << endl;
#define debug3(p, q, r)  cerr << #p << ": " << p << " | " << #q << ": " << q << " | " << #r << ": " << r << endl;
 
#define  takeinput() freopen("ip.txt","r",stdin);
#define  takeoutput() freopen("op.txt","w",stdout);
 
typedef vector < int > vi;
typedef pair < int, int> ii;
typedef vector < ii > vii;
 
#define trvi(c, it) for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define trvii(c, it) for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define pb push_back
#define mp make_pair
#define lsegtree(N) (int)(2 * pow(2.0, floor((log((double)N) / log(2.0)) + 1)))
 
typedef long long int64;
typedef double float64;
 
//START
 
int main(){//takeinput();
    char grid[105][105];
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cin.ignore();
        for(int j=1;j<=n;j++)scanf("%c",&grid[i][j]);
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            int cnt = 0;
            cnt+=(grid[i-1][j]=='o');
            cnt+=(grid[i+1][j]=='o');
            cnt+=(grid[i][j-1]=='o');
            cnt+=(grid[i][j+1]=='o');
            if(cnt%2){cout<<"NO\n";return 0;}
        }
    cout<<"YES\n";
    return 0;
}