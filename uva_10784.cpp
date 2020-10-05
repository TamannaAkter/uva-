#include<bits/stdc++.h>
using namespace std;
main()
{
    long long t,i=1,n;
    double d;
    while(cin>>n)
    {
        if(n==0)
            break;
        else
        {
            d=(3.0+sqrt(9.0+8.0*n))/2.0;
            t=d;
            if(t!=d)
                t++;
            cout<<"Case "<<i++<<": "<<t<<endl;
        }

}}
