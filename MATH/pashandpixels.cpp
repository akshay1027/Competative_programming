#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define ll long long
#define MAX 1e9
#define MIN -1e9
using namespace std;
const ll maxn = 1000 + 10, mod = 1e9 + 7 , INF = 1e18 , lg = 32;
 
bool pix[maxn][maxn];
 
inline bool check(int x, int y) {
    if(pix[x + 1][y] == 1 && pix[x][y + 1] == 1 && pix[x + 1][y + 1] == 1) {
        return 1;
    }
    if(pix[x - 1][y] == 1 && pix[x][y - 1] == 1 && pix[x - 1][y - 1] == 1) {
        return 1;
    }
    if(pix[x + 1][y] == 1 && pix[x][y - 1] == 1 && pix[x + 1][y - 1] == 1) {
        return 1;
    }
    if(pix[x - 1][y] == 1 && pix[x][y + 1] == 1 && pix[x - 1][y + 1] == 1) {
        return 1;
    }
    return 0;
}
 
int main() {
    fastio;
    ll n , m , k;
    cin >> n >> m >> k;
    int is = 0;
    for (int i = 0; i < k; ++i) {
        int x, y; cin >> x >> y;
        pix[x][y] = 1;
        if(check(x , y) && !is) {
            is = i + 1;
        }
    }    
    cout << is << endl;
}