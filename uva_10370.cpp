#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,a[1000];
    float sum,avg,countt;
    cin>>t;
    while(t--)
    {
        sum=0;
        countt=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        avg=sum/n;
        for(int i=0;i<n;i++)
        {
            if(a[i]>avg)
                countt++;
        }
        printf("%.3f%\n",((100*countt)/n));
    }
}
