#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,l1,l,x;
    char c[100],d[100];
    cin>>t;
    while(t--)
    {
        cin>>c>>d;
        l=strlen(c);
        l1=strlen(d);
        if(l==l1)
        {
            for(int i=0;i<l;i++)
            {
                if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u')
                    c[i]='a';
            }
            for(int i=0;i<l1;i++)
            {
                if(d[i]=='a' || d[i]=='e' || d[i]=='i' || d[i]=='o' || d[i]=='u')
                    d[i]='a';
            }
            x=0;
            for(int i=0;i<l;i++)
            {
                if(c[i]!= d[i])
                    {x=1;
                    break;}

            }
            if(x==1)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
}
