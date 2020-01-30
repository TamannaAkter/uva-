#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i=1;
    double x,y,z,u,v,t,s,a;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        else
        {
            if(n==1)
            {
               cin>>x>>y>>z;
               u=x;
               v=y;
               t=z;
               a=(v-u)/t;
               s=(u*t)+((a*t*t)/2.0);
               printf("Case %d: %.3lf %.3lf\n",i++,s,a);
            }
            else if(n==2)
            {
                cin>>x>>y>>z;
                u=x;
                v=y;
                a=z;
                t=(v-u)/a;
                s=(u*t)+((a*t*t)/2.0);
                printf("Case %d: %.3lf %.3lf\n",i++,s,t);
            }
            else if(n==3)
            {
                cin>>x>>y>>z;
                u=x;
                a=y;
                s=z;
                v=sqrt((u*u)+(2*a*s));
                t=(v-u)/a;
                printf("Case %d: %.3lf %.3lf\n",i++,v,t);

            }
            else if(n==4)
            {
                cin>>x>>y>>z;
                v=x;
                a=y;
                s=z;
                u = sqrt(v*v - 2*a*s);
                t=(v-u)/a;
                printf("Case %d: %.3lf %.3lf\n",i++,u,t);
            }
        }
    }
}
