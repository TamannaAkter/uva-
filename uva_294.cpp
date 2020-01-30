#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    long long l,u,maxx,i,j,countt,countt1,x,y;
    cin>>t;
    while(t--)
    {
       cin>>l>>u;
       maxx=0;
       countt=2;
       for(i=l;i<=u;i++)
       {
           x=i;
           if(x==1)
           {
               countt1=1;
               if(maxx<countt1)
                    {maxx=countt1;
                     y=x;}

           }
           else
           {for(j=2;j<=x/2;j++)
           {
               if(x%2==0)
               {
                   countt++;
               }
           }
            countt+=2;
           if(maxx<countt)
                maxx=countt;
                y=x;

           }
       }
       cout<<"Between "<<l<<" and "<<u<<", "<<y<<" has a maximum of "<<maxx<<" divisors."<<endl;
    }
}
