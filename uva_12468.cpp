#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=200,a,b,ans;
    while (t--)
    {
        scanf("%d%d",&a,&b);
        if (a==-1 && b==-1)
            break;
        ans=abs(a-b);
        if (ans>50)
            {ans=100-ans;}
        printf("%d\n",ans);
    }
    return 0;
}
