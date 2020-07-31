#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,a[n],chest=0,bicepa=0,bac=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(i%3==0)
            chest+=a[i];
        if(i%3==1)
            bicepa+=a[i];
        if(i%3==2)
            bac+=a[i];
    }
    if(max(chest,(max(bicepa,bac)))==chest)
        cout<<"chest"<<endl;
    else if(max(chest,(max(bicepa,bac)))==bicepa)
        cout<<"biceps"<<endl;
    else if(max(chest,(max(bicepa,bac)))==bac)
        cout<<"back"<<endl;
    return 0;
}