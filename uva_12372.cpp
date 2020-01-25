#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t,l,w,h,i=1;
 cin>>t;
 while(t--)
 {
     cin>>l>>w>>h;
     if(l<=20 && w<=20 && h<=20)
     {
         cout<<"Case "<<i++<<": good"<<endl;
     }
     else
     {
         cout<<"Case "<<i++<<": bad"<<endl;
     }
 }
 return 0;
}
