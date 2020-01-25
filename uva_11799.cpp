#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=1;
    while(cin>>t)
    while(t--)
    {
        long int n,a,i,res=-1;

        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(res<a)
            {
                res=a;
            }
        }
        cout<<"Case "<<j++<<": "<<res<<endl;
    }
    return 0;
}
