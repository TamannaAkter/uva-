#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n;
    long long sum=0;
    char s[20];
    cin>>t;
    while(t--)
    {

        cin>>s;
        if(strcmp(s,"donate")==0)
        {
            cin>>n;
            sum+=n;
        }
        else if(strcmp(s,"report")==0)
        {
            cout<<sum<<endl;
        }
    }
}
