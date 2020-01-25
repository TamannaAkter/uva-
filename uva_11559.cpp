#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,b,h,w,p,bed,cost,tcost;
    while(scanf("%lld %lld %lld %lld",&n,&b,&h,&w)==4)
    {
        tcost=1000000;
        for(int i=1; i<=h; i++)
        {
            cin>>p;
            for(int j=1; j<=w; j++)
            {
                cin>>bed;
                if(bed>=n)
                {
                    cost=p*n;
                    if(tcost>cost)
                    {
                        tcost=cost;
                    }
                }
            }
        }

    if(tcost<=b)
    {
        cout<<tcost<<endl;
    }
    else
        cout<<"stay home"<<endl;
    }
    return 0;
}
