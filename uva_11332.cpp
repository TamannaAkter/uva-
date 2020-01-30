#include<bits/stdc++.h>
using namespace std;
main()
{
    long int n,sum,rem;
    while(scanf("%ld",&n)!=EOF && n!=0)
    {
        sum=0;
        while(1)
       {
           while(n!=0)
        {
            rem=n%10;
            n/=10;
            sum+=rem;
        }
        if(sum<10)
            break;
        else
            n=sum;
            sum=0;
       }
      cout<<sum<<endl;
    }
}
