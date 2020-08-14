#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> a;
    int temp;
    for (int i = 0; i < m; ++i) {
        cin>>temp;
        a.push_back(temp);
    }
    int mk;
    cin>>mk;
    int cnt = 0;
    for(auto& e:a){
        if(__builtin_popcount(mk^e) <= k){
            cnt += 1;
        }
    }
    cout<<cnt;
    
 
    return 0;
}