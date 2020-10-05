#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    string s;
    cin>>t;
    while(scanf("%d",&t)!=EOF && t!=0 )
    {
        cin>>s;
        int l=s.size();
        int x=l/t;
        for(int i=0;i<l;i+=x)
        {
            for(int j=i,p=i+x-1;j<p;++j,--p)
            {
              char temp(s[j]);
              s[j]=s[p];
              s[p]=temp;
            }

        }

        cout<<s<<endl;
    }
}
