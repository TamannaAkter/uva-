#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,ans,x,i,j;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
     ans=0;
     x=n;
     while(n>=k)
      {i=n/k;
      j=n%k;
      ans+=i;
      n=i+j;
    }
    cout<<(ans+x)<<endl;
}
}
