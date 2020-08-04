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

//  ** another ** //

#include<bits/stdc++.h>
using namespace std;
#define M 1e9 + 7
#define MAXN 1000005
#define C 998244353
#define pi 3.14159265359
#define loop(i,a,b) for(ll i = ll(a); i < ll(b); ++i)
#define rloop(i,a,b) for(ll i = ll(a); i >= ll(b); --i)
#define sloop(i,a) for (std::set<ll>::iterator i = a.begin(); i != a.end(); ++i)
#define pb push_back
#define all(v) v.begin(),v.end()
typedef long long int ll;
typedef unsigned long long int ull;
 
vector<ll> edges[MAXN],component,good(MAXN),ans;
// bool done[MAXN];
ll nodes = 0;
void dfs(int m){
    int flag=1;
    for (std::vector<ll>::iterator i = edges[m].begin(); i != edges[m].end(); ++i)
    {
        if(!good[*i])
            flag=0;
        dfs(*i);
    }
    if(flag and good[m])
        ans.pb(m);
}
int sum_dig(int n){
    int sum=0;
    while(n>0){
        sum += n%10;
        n/=10;
    }
    return sum;
}
int solve(){
    ll n,k,a,b;
    cin >> n;
    k = ceil(n/4.0);
    // cout << k << '\n';
    loop(i,0,n-k){
        cout << 9;
    }
    loop(i,0,k){
        cout << 8;
    }
    cout << endl;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    loop(f,0,t){    
        solve();
    }   
}

// **another **//
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define all(x) (x).begin(), (x).end()
 
using namespace __gnu_pbds;
using namespace std;
 
using ull = unsigned long long;
using ll = long long;
using ld = long double;
template <typename T> using ordered_set = tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;
 
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int N = 300 + 5;
 
struct point {
    int x, y;
    point(): x(), y() {}
};
 
int n;
point a[N];
 
int area(point p1, point p2, point p3) {
    return p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y);
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i].x >> a[i].y;
 
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int mx = 0, mn = 0;
            for (int k = 0; k < n; k++) {
                if (k == i or k == j) continue;
                mx = max(mx, area(a[k], a[i], a[j]));
                mn = min(mn, area(a[k], a[i], a[j]));
            }
 
            if (mx == 0 or mn == 0) continue;
            ans = max(ans, mx - mn);
        }
    }
 
    cout << fixed << setprecision(1) << ans / 2.0 << "\n";
    return 0;
}




/* Author : samarth
   Handle : ssg_13 */
 
//----------------------template begins--------------------------------//
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
using namespace std::chrono;
 
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define S second
#define mp make_pair
#define mt make_tuple
#define eb emplace_back //faster than pb
#define pb push_back 
#define Db(x) cout << '>' << #x << ':' << x << endl;
#define forn(i,n) for(ll i=0;i<n;i++)
#define rforn(i,n) for(ll i=n-1;i>=0;i--)
#define forne(i,n) for(ll i=1;i<=n;i++)
#define forse(i,s,e) for(ll i=s;i<e;i++)
#define rforse(i,s,e) for(ll i=e;i>=s;i--)
#define all(x) x.begin(),x.end()
#define sz(x) (ll)x.size()
#define fill(a,x) memset(a,x,sizeof a);
#define trav(a,x) for(auto &a:x)
#define PT palindromeTest	//Input - string, int, ll, l
#define GS generateSubsets	//Input - n		//Return - vector<vector<int>>
#define GP generatePermutations //Input - int n 	//Return - vector<vector<int>>
#define PF primeFactorization	//Input - ll	//Return - vector<ll>
#define nCr nCrModPFermat   //Input - n, r, p	//Return - nCr mod p
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}
 
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// find_by_order(i) return pointer to ith index in ordered set
 
 
const ll MOD = 1000000007;
ll modpow(ll a,ll b,ll m=MOD) {a%=m;ll res=1;while(b){if(b&1)res=res*a%m;a=a*a%m;b>>=1;}return res;}
ll bpow(ll a, ll b) {ll res = 1;while(b){if(b&1)res=res*a;a=a*a;b>>=1;}return res;}
ll modinv(ll a){return modpow(a,MOD-2,MOD);}
void graph(vector<ll> adj[], ll m){ll x, y; forn(i, m){cin>>x>>y;adj[x-1].pb(y-1);adj[y-1].pb(x-1);}}
ll sum() { return 0; }
template<typename T, typename... Args>
auto sum(T a, Args... args) { return a + sum(args...); }
 
const ll INF=(ll)1e18;
const int MAXN = 200001;
//----------------------template ends--------------------------------//
 
int32_t main()
{
fast;
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
cout << fixed << setprecision(11);
cerr << fixed << setprecision(6);
auto start = high_resolution_clock::now();
ll T;
// cin>>T;
T=1;
while(T--)
{
    ll n;
    cin>>n;
    ll x[n];
    ll g;
    forn(i,n) 
    {
        cin>>x[i];
        g=(i==0)?x[i]:__gcd(x[i],g);
    }
    cout<<n*g<<'\n';
}
auto stop = high_resolution_clock::now(); 
auto duration = duration_cast<microseconds>(stop - start);
// cout << "Time taken by function: "
//          << duration.count() << " microseconds" << endl; 
}