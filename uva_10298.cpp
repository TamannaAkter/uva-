#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    int l,i,coun;
    while(cin>>s && s!=".")
    {
        coun=1;
        l=s.length();
        for(i=1; i<l; i++)
        {
            while(s[i]!=s[i%coun])
                coun++;

        }if(l%coun!=0)
                cout<<"1"<<endl;
            else
                cout<<l/coun<<endl;

    }

}

