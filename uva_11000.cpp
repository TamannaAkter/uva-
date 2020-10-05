#include<bits/stdc++.h>
using namespace std;
main()
{
    unsigned int n,f0,f1,f,sum,x;
    while(cin>>n)
    {f0=0;
        f1=1;
        sum=0;
        x=0;

        if(n==-1)
            break;


        else
        {
            for(int i=0;i<=n;i++)
            {
                f=f0+f1;
                sum+=f;
                f1=f0;
                f0=f;
                x+=f1;
            }

            cout<<x<<" "<<sum<<endl;

        }
    }
}
