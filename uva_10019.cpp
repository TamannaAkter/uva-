#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,n1,i,j,b1,b2,rem,rem1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n1=n;
        b1=0,b2=0;
        while(n!=0)
        {
           rem=n%2;
           if(rem==1)
                b1++;
           n=n/2;
        }
        while(n1!=0)
        {
            rem1=n1%10;
            if(rem1==1 || rem1==2 || rem1==4 || rem1==8)
                b2++;
            else if(rem1==3 || rem1==5 || rem1==6 || rem1==9)
                b2+=2;
            else if(rem1==7)
                b2+=3;
            n1=n1/10;
        }
        cout<<b1<<" "<<b2<<endl;

    }
}
