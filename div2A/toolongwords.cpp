#pragma GCC optimize("O2") 
#include<bits/stdc++.h>
using namespace std;

int main()
{   int n;
cout<<"enter the n";
    cin>>n;
    while(n--)
    {
       vector <char> a; 
       char b;
       cout<<"enter the string";
       for(int i=0; i<100 ; i++)
       {   
           cin>>b;
           a.push_back(b);
       }

       a.shrink_to_fit();
       auto a1 = a.begin();
       auto a2 = a.end();
       
       if(a.size()>10)
       {
           cout<< *a1 << (a.size()-2) << *a2;
       }
       else{
           for (auto i = a.begin(); i != a.end(); ++i) 
              cout << *i; 
       }
    }
    
    return 0;
}