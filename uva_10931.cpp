#include<bits/stdc++.h>
using namespace std;
main()
{
    unsigned long int n;
    int a[1000],countt,i;
    while(scanf("%lu",&n)!=EOF && n!=0)
    {
        countt=0;
        for(i=0; n>0; i++)
        {
            a[i]=n%2;
            n=n/2;
            if(a[i]==1)
            {
                countt++;
            }
        }
        cout<<"The parity of ";
        for(i=i-1; i>=0; i--)
        {
            cout<<a[i];
        }
        cout<<" is "<<countt<<" (mod 2)."<<endl;

    }
}
