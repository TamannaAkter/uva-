#include<bits/stdc++.h>
using namespace std;
main()
{
    long int a,b,c,x,y,z;
    while(scanf("%ld %ld %ld",&a,&b,&c)!=EOF)
    {
        if(a==0 && b==0 && c==0)
            break;
        else{
            x=a*a;
            y=b*b;
            z=c*c;
            if((x+y)==z ||(y+z)==x || (x+z)==y)
            {
                cout<<"right"<<endl;
            }
            else
                cout<<"wrong"<<endl;
        }
    }
}
