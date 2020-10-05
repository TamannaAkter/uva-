#include<bits/stdc++.h>
using namespace std;
main()
{
    long double x,sum;
    while(cin>>x)
    {
        sum=(x*x*(x+1)*(x+1))/4;
        printf("%.0Lf\n",sum);
    }
}
