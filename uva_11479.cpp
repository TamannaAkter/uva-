#include<bits/stdc++.h>
using namespace std;
main()
{
     long int a,b,c;
     int t,i=1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if((a+b)>c && (b+c)>a && (c+a)>b)
        {
            if(a==b && b==c && a==c)
            {
                cout<<"Case "<<i++<<": Equilateral"<<endl;
            }
            else if(a==b || b==c || a==c)
            {
                cout<<"Case "<<i++<<": Isosceles"<<endl;
            }
            else
            {
                cout<<"Case "<<i++<<": Scalene"<<endl;
            }
        }
        else
        {
          cout<<"Case "<<i++<<": Invalid"<<endl;
        }
    }
}
