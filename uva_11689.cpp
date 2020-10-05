#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,e,f,c,a,b,d,i=1;
   cin>>n;
   while(n--)
    {
     cin>>e>>f>>c;
     b=0;
            d=e+f;
            while (d>=c)
            {
                a=d/c;
                b=b+a;
                d=a+(d%c);
            }
            cout<<b<<endl;
    }
}
