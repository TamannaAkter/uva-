#include<bits/stdc++.h>
using namespace std;
main()
{
    int i=1,t;
    double f,ans,c,d;
    cin>>t;
    while(t--)
    {
        cin>>c>>d;
        f=((9*c)/5)+d;
        ans=(5*f)/9;

        printf("Case %d: %.2lf\n",i++,ans);
    }
}
