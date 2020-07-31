#pragma GCC optimize("O2") 
#include<bits/stdc++.h>
using namespace std;

int calc( int p, int t ){
    return max(3*p/10, p- (p/250 * t) );
}
int main(){
 
    int a,b,c,d;
    cin >> a >> b>>c >> d;
    int r1, r2;
    r1 = calc(a,c);
    r2 = calc(b,d);
    
    //cout << r1 << " " << r2 << endl;
    
    if( r1 > r2 ) cout << "Misha";
    else {
        if( r1 < r2 ) cout << "Vasya";
        else cout << "Tie";
    }
    
    return 0;
}