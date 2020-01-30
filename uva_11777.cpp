#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,t1,t2,f,a,ct1,ct2,ct3,ct,sum,avg,i=1;
    cin>>t;
    while(t--)
    {
        cin>>t1>>t2>>f>>a>>ct1>>ct2>>ct3;
        if(ct1<=ct2 && ct1<=ct3)
            ct=ct2+ct3;
        else if(ct2<=ct1 && ct2<=ct3)
            ct=ct1+ct3;
        else
            ct=ct1+ct2;
        avg=ct/2;
        sum=t1+t2+f+a+avg;
        if(sum>=90)
            cout<<"Case "<<i++<<": A"<<endl;
        else if(sum>=80 && sum<90)
            cout<<"Case "<<i++<<": B"<<endl;
        else if(sum>=70 && sum<80)
            cout<<"Case "<<i++<<": C"<<endl;
        else if(sum>=60 && sum<70)
            cout<<"Case "<<i++<<": D"<<endl;
        else if(sum<60)
            cout<<"Case "<<i++<<": F"<<endl;

    }
}
