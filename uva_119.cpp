#include<bits/stdc++.h>
using namespace std;
main()
{
    int p,tk,np,i,j,k=1,x,y;
    string pname[100],name1,name2;
    map<string,int>nettk;
    while(cin>>p)
    {
        for(i=0;i<p;i++)
        {
            cin>>pname[i];
            nettk[pname[i]]=0;
        }
        for(i=0;i<p;i++)
        {
            cin>>name1;
            cin>>tk>>np;
            if(np!=0)
            {
                x=tk/np;
                y=x*np;

            for(j=0;j<np;j++)
            {
                cin>>name2;
                nettk[name2]+=x;
            }
            nettk[name1]-=y;
        }
        }
        if(k!=1)
            cout<<endl;
        for(i=0;i<p;i++)
        {
            cout<<pname[i]<<" "<<nettk[pname[i]]<<endl;
        }
        k++;
    }
}
