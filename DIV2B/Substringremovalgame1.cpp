#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long
#define ld long double
#define endl '\n'
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vpii vector<pii>
#define gr vector<vpii>
#define str string
#define mask vector<bool>
#define vs vector<str>
#define pq priority_queue
#define si set<int>
#define ordered_set_of(T) tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>
#define fi first
#define se second
#define sz(x) (int)((x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define nub(x) x.resize(unique(all(x)) - x.begin())
#define sq(x) ((x) * (x))
#define TWO class T1, class T2
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define MOD (int)(1E9 + 7)
#define GAME_OVER return 0
using namespace std;
using namespace __gnu_pbds;
char _$ = ' ';
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int q;
    cin >> q;
    while (q--)
    {
        str s;
        cin >> s;
        int n = sz(s), i = 0, res = 0;
        vi a;
        while (i < n)
        {
            if (s[i] == '0')
            {
                i++;
                continue;
            }
            int j = i;
            while (j + 1 < n && s[j + 1] == '1')
                j++;
            a.push_back(j - i + 1);
            i = j + 1;
        }
        sort(rall(a));
        for (int i = 0; i < sz(a); i += 2)
            res += a[i];
        cout << res << endl;
    } 
    return 0;
}