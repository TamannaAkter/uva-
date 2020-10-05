#include<bits/stdc++.h>
using namespace std;
main()
{
    unsigned int n,x;
    while(cin>>n)
    {
        if(n==0)
            break;
        else
        {
            x=sqrt(n);
            if(x*x==n)
                cout<<"yes"<<endl;
            else
                 cout<<"no"<<endl;
        }
    }
}
