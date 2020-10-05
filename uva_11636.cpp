#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i=1,x,countt;
    while(scanf("%d",&n)!=EOF)
    {
        x=1;
        countt=0;
        if(n<0)
            break;
        else
        {
            if(n==1)
                cout<<"Case "<<i++<<": 0"<<endl;
            else
            {
                while(x<n)
                {
                    x+=x;
                    countt++;
                }
                cout<<"Case "<<i++<<": "<<countt<<endl;
            }
        }
    }
}
