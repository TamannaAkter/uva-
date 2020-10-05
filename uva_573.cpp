#include<bits/stdc++.h>
using namespace std;
main()
{
    double h,u,d,f,initial;
    int i;
    bool result;
    while(cin>>h>>u>>d>>f)
    {
        if(h<=0)
            break;

        f=(f/100)*u;
        i=0;
        initial=0;
        while(true)
        {
            i++;
            initial+=u;
            u-=f;
            if(u<0)
                u=0;
            if(initial>h)
                {
                    result=true;
                    break;
                }
            initial-=d;
            if(initial<0)
            {
                result=false;
                break;
            }


        }
        if(result==true)
        {
            cout<<"success on day "<<i<<endl;

        }
        else
        {
            cout<<"failure on day "<<i<<endl;

        }


    }
}
