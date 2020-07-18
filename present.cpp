//with map data structure

#pragma GCC optimize("O2") 
#include <bits/stdc++.h>
using namespace std;

 void sort(map<int, int>& a) 
{ 
  
    // Declare a multimap 
    multimap<int, int> MM; 
  
    // Insert every (key-value) pairs from 
    // map M to multimap MM as (value-key) 
    // pairs 
    for (auto& it : a) { 
        MM.insert({ it.second, it.first }); 
    } 
  
    // Print the multimap 
    for (auto& it : MM) { 
        cout<< it.second <<" ";
    } 
} 
int main()
{
    int n,b;
    cin>>n;

    map<int,int> a;

    for(int i=1;i<=n;i++)
    {
        cin>>b;
        a.insert(pair<int, int>(i,b));
    }
     
     sort(a);
     return 0;
}