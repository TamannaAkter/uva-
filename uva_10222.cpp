#include<bits/stdc++.h>
using namespace std;
main()
{
    char c[1000],l;
    while(gets(c))
        {
         l=strlen(c);
    for(int i=0;i<l;i++)
        {

        if(c[i]=='=' || c[i]=='+')
            cout<<"0";
        else if(c[i]=='-' || c[i]=='_' )
            cout<<"9";
        else if(c[i]=='0')
            cout<<"8";
        else if(c[i]=='9')
            cout<<"7";
        else if(c[i]=='8')
            cout<<"6";
        else if(c[i]=='7')
            cout<<"5";
        else if(c[i]=='6')
            cout<<"4";
        else if(c[i]=='5')
            cout<<"3";
        else if(c[i]=='4')
            cout<<"2";
        else if(c[i]=='3')
            cout<<"1";
        else if(c[i]=='2')
            cout<<"`";
        else if(c[i]==']')
            cout<<"p";
        else if(c[i]=='[')
            cout<<"o";
        else if(c[i]=='P' || c[i]=='p')
            cout<<"i";
        else if(c[i]=='O' || c[i]=='o')
            cout<<"u";
        else if(c[i]=='I' || c[i]=='i')
            cout<<"y";
        else if(c[i]=='U' || c[i]=='U')
            cout<<"t";
        else if(c[i]=='Y' || c[i]=='y')
            cout<<"r";
        else if(c[i]=='T' || c[i]=='t')
            cout<<"e";
        else if(c[i]=='R' || c[i]=='r')
            cout<<"w";
        else if(c[i]=='E' || c[i]=='e')
            cout<<"q";
        else if(c[i]=='W' || c[i]=='w')
            cout<<"w";
        else if(c[i]=='Q' || c[i]=='q')
            cout<<"q";
        else if(c[i]=='"')
            cout<<"l";
        else if(c[i]==';' || c[i]==':')
            cout<<"k";
        else if(c[i]=='L' || c[i]=='l')
            cout<<"j";
        else if(c[i]=='K' || c[i]=='k')
            cout<<"h";
        else if(c[i]=='J' || c[i]=='j')
            cout<<"g";
        else if(c[i]=='H' || c[i]=='h')
            cout<<"f";
        else if(c[i]=='G' || c[i]=='g')
            cout<<"d";
        else if(c[i]=='F' || c[i]=='f')
            cout<<"s";
        else if(c[i]=='D' || c[i]=='d')
            cout<<"a";
        else if(c[i]=='?' || c[i]=='/')
            cout<<",";
        else if(c[i]=='.' || c[i]== '>')
            cout<<"m";
        else if(c[i]==',' || c[i]== '<')
            cout<<"n";
        else if(c[i]=='M' || c[i]=='m')
            cout<<"b";
        else if(c[i]=='N' || c[i]=='n')
            cout<<"v";
        else if(c[i]=='B' || c[i]=='b')
            cout<<"c";
        else if(c[i]=='V' || c[i]=='v')
            cout<<"x";
        else if(c[i]=='C' || c[i]=='c')
            cout<<"z";
        else if(c[i]=='X' || c[i]=='x')
            cout<<"x";
        else if(c[i]=='Z' || c[i]=='z')
            cout<<"z";
        else if(c[i]==' ')
            cout<<" ";

        }
        }
}
