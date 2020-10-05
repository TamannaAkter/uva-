#include<bits/stdc++.h>
using namespace std;
main()
{
    string s,s1,s2,s3,s4;
    char c[10000];
    memset(c,0,sizeof(c));
    c['A']='A';
    c['E']='3';
    c['H']='H';
    c['I']='I';
    c['J']='L';
    c['L']='J';
    c['M']='M';
    c['O']='O';
    c['S']='2';
    c['T']='T';
    c['U']='U';
    c['V']='V';
    c['W']='W';
    c['X']='X';
    c['Y']='Y';
    c['Z']='5';
    c['1']='1';
    c['2']='S';
    c['3']='E';
    c['5']='Z';
    c['8']='8';
    while(cin>>s)
    {
        s2=s;
        s1=s;
        reverse(s.begin(),s.end());
        int n=s1.length();
        s4=s3="";
        for(int i=n-1; i>=0; i--)
        {
            s4+=s1[i];
            s3+=c[s1[i]];
        }

        //cout<<s2<<" "<<s<<" "<<s3;
         if(s2!=s && s2!=s3)
            cout<<s2<<" -- is not a palindrome."<<endl<<endl;
        else if(s2==s && s2!=s3)
            cout<<s2<<" -- is a regular palindrome."<<endl<<endl;
        else if(s2!=s && s2==s3)
            cout<<s2<<" -- is a mirrored string."<<endl<<endl;
        else
            cout<<s2<<" -- is a mirrored palindrome."<<endl<<endl;

    }
}

