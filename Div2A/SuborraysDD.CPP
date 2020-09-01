#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
 
mt19937 rng((int) std::chrono::steady_clock::now().time_since_epoch().count());
 
signed main()
{ 
    fastio;
    test{
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 1;i <= n;i++)a.push_back(i);
    shuffle(a.begin(),a.end(),rng);
    for(int i = 0;i < n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    }
    return 0;
}

 
