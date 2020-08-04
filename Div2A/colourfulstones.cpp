#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string line, inst;
    cin >> line >> inst;
    int loc = 0;
    for (int i = 0; i < inst.length(); i++) {
        if (inst[i] == line[loc]) {
            loc++;
        }
    }
    cout << loc + 1;
 
}