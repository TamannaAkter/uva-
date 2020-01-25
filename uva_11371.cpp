#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long  n,x,rem,rev,res,ans;
    while(cin>>n)
    {
        x=n;
        rev=0;
        while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        ans=(rev-x);
        res=ans/9;
        cout<<rev<<" - "<<x<<" = "<<ans<<" = 9 * "<<res<<endl;
    }
    return 0;
}
