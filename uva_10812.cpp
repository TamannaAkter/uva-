#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int t,s,d,x,y;
   while(scanf("%ld",&t)==1)
    while(t--)
    {
        cin>>s>>d;
        if(s>d)
        {
            x=(s-d)/2;
            y=d+x;
            cout<<y<<" "<<x<<endl;
        }
        else
        {
            cout<<"impossible"<<endl;
        }
    }
}
