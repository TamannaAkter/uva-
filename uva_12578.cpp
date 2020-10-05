#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1.0)
main()
{
   int t;
   double l,x,r,red,green;
   cin>>t;
   while(t--)
   { cin>>l;
       x=l*6/10;
       r=l/5;
       red=PI*r*r;
       green=(x*l)-red;
       printf("%.2lf %.2lf\n",red,green);
   }
}
