#include<bits/stdc++.h>
using namespace std;
main()
{
    char s[40],s1[40],x[40];
    int i=1,j,k,l,t;
  while(scanf("%d\n",&t)==1)
    {while(t--)
    {
        gets(s);
        gets(s1);

        if(strcmp(s,s1)==0)
            cout<<"Case "<<i++<<": Yes"<<endl;
        else
        {
          l=strlen(s);
             j=0;
            for(k=0;k<l;k++)
            {
                if(s[k]!=' ')
                {
                    x[j]=s[k];
                    j++;
                }

            }x[j]='\0';
                if(strcmp(x,s1)==0)
                    cout<<"Case "<<i++<<": Output Format Error"<<endl;
                else
                    cout<<"Case "<<i++<<": Wrong Answer"<<endl;
        }
    }
    }
}
