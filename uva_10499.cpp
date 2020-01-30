#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n>1)
        {
            cout<<(25*n)<<"%"<<endl;
        }
        else if(n==1)
            cout<<"0%"<<endl;
        else
            break;
    }
}
