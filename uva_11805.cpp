#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,i=1,n,k,p,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>p;
        x=k+p;
        while(x>n)
        {
            x-=n;
        }
            cout<<"Case "<<i++<<": "<<x<<endl;
    }
}
