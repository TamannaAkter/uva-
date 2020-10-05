#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,i,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=(((((n*567)/9)+7492)*235)/47)-498;
        i=2;
        while(i--)
        {
         ans=x%10;
         x=x/10;
        }
        cout<<abs(ans)<<endl;
    }
}
