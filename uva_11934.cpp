#include<bits/stdc++.h>
using namespace std;
main()
{
    long int a,b,c,d,l,x,y,i,countt;
    while(scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&l)!=EOF)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
        {
           break;
        }
        else
        {countt=0;
        for(i=0;i<=l;i++)
        {
            x=i;
            y=(a*x*x)+(b*x)+c;
            if(y%d==0)
            {
                countt++;
            }
        }
        cout<<countt<<endl;
        }
    }
}
