#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,a,b,j=1,sum;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        sum=0;
        for(int i=a;i<=b;i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        cout<<"Case "<<j++<<": "<<sum<<endl;
    }
}
