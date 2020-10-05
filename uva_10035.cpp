#include<bits/stdc++.h>
using namespace std;
main()
{
    long long a,b,c,d,i,sum;
    while(cin>>a>>b)
    {
        i=0;
        sum=0;
        if(a==0 && b==0)
            break;
        if(a<b)
        {
            c=a;
            a=b;
            b=c;
        }
        while(a!=0)
        {
            c=a%10;
            a=a/10;
            d=b%10;
            b=b/10;
            sum=sum+c+d;
            if(sum>=10)
            {
                i++;
                sum/=10;
            }
            else
                sum=0;
        }

        if(i==0)
            cout<<"No carry operation."<<endl;
        else if(i==1)
            cout<<i<<" carry operation."<<endl;
        else
            cout<<i<<" carry operations."<<endl;
    }
}
