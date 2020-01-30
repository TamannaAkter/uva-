#include<bits/stdc++.h>
using namespace std;
main()
{
    long int a,b,i,j,countt,ans;
    while(scanf("%ld %ld",&a,&b)!=EOF && (a!=0 && b!=0))
    {
        countt=0;
        for(i=a;i<=b;i++)
        {
            j=i;
           ans=sqrt(i);
           if((ans*ans)==j)
           {
               countt++;
           }
        }
        cout<<countt<<endl;
    }
}
