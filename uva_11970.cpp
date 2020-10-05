#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,x,p;
int t,i,j=1;
scanf("%d",&t);
while(t--)
{
scanf("%lld",&n);
printf("Case %d:",j++);
p=sqrt(n);
for(i=p;i>0;i--)
{
x=n-i*i;
if((x%i==0)&&(x>=i))
printf("% lld",x);
}
cout<<endl;
}
return 0;
}
