#include<bits/stdc++.h>
using namespace std;
main()
{
    long int n,sum,odd;
    while(cin>>n)
    {
        odd=(n*(n+2))/2;
        sum=(odd*3)-6;
        cout<<sum<<endl;
    }
}
