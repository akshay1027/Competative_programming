#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define ll long long
#define G(x) ll x; cin >> x;
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define MAX 1e9
#define MIN -1e9
using namespace std;
 
const int N = 2e5 + 5;
 
int n, a[N], pos[N];
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i]--;
            pos[a[i]] = i;
        }
 
        int c = 0, len1 = 0, len2 = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == i)
                len1++;
            else break;
        }
 
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] == i)
                len2++;
            else break;
        }
 
        for (int i = len1; i < n - len2; i++) {
            if (a[i] == i)
                c++;
        }
 
        if (len1 == n) cout << 0 << "\n";
        else if (c == 0) cout << 1 << "\n";
        else cout << 2 << "\n";
    }
    return 0;
}