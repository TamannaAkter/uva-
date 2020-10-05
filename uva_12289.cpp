#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,l;
    char s[6];
    cin>>n;
    while(n--)
    {
       cin>>s;
        l=strlen(s);
        if(l==5)
            cout<<"3"<<endl;
        else
        {
            if((s[0]=='o' && s[1]=='n') || (s[0]=='o' && s[2]=='e') || (s[1]=='n' && s[2]=='e'))
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
    }
}
