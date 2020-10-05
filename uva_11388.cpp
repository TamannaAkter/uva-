#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,g,l;
    cin>>t;
    while(t--)
    {
        cin>>g>>l;
        if(l%g==0)
            cout<<g<<" "<<l<<endl;
        else
            cout<<"-1"<<endl;
    }
}
