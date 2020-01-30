#include<bits/stdc++.h>
using namespace std;
main()
{
    int h1,m1,h2,m2,h,m;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)!=EOF)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        else
        {
            h=h2-h1;
            m=m2-m1;

            if(m<0)
            {
                m+=60;
                h-=1;
            }
            if(h<0)
            {
                h+=24;
            }
            cout<<(h*60)+m<<endl;
        }
    }
}
