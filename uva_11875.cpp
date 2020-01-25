#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[20],k=1;
    while(scanf("%d",&t) == 1)
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int j=(n/2);
        cout<<"Case "<<k++<<": "<<ar[j]<<endl;

    }
    return 0;
}
