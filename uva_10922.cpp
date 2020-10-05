#include<bits/stdc++.h>
using namespace std;
main()
{
char num[1010];
while(scanf("%s",num) &&(num[0]-48))
{
int j,sum,k,p;
j=strlen(num)-1;
sum=0;
while(j>=0)
{
sum+=(num[j]-48);
j--;
}
if(sum%9!=0)
printf("%s is not a multiple of 9.\n",num);
else
{
k=1;
while(sum>10)
{ k++;
p=sum;
sum=0;
while(p>0)
{
sum+=p%10;
p=p/10;
}
}
printf("%s is a multiple of 9 and has 9-degree %d.\n",num,k);
}
}
}
