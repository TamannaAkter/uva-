#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,cd,cm,cy,bd,bm,by,i=1,age;
    cin>>t;
    while(t--)
    {
        scanf("%d/%d/%d",&cd,&cm,&cy);
        scanf("%d/%d/%d",&bd,&bm,&by);
        age=cy-by;

        if(bm>cm || (bm==cm && bd>cd))
            age--;
        if(age<0)
            cout<<"Case #"<<i++<<": Invalid birth date"<<endl;
        else if(age>130)
            cout<<"Case #"<<i++<<": Check birth date"<<endl;
        else
            cout<<"Case #"<<i++<<": "<<age<<endl;
    }
}
