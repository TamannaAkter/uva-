#include<bits/stdc++.h>
using  namespace std;
main()
{
    int t,i=1,j,l,val,k;
    char x;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        l=s.length();
        cout<<"Case "<<i++<<": ";
        for(j=0; j<l; j++)
        {
            val=0;
            if(s[j]>='A' && s[j]<='Z')
            {
                x=s[j];
            }
            else if(s[j]>='0' && s[j]<='9')
            {
                val=val+s[j]-'0';
                j++;
                while(s[j]>='0' && s[j]<='9')
                {
                    val=val*10;
                    val+=s[j]-'0';
                    j++;
                }
                j--;
                for(k=0; k<val; k++)
                    cout<<x;
            }
        }
        cout<<endl;
    }
}
