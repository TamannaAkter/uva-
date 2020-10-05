#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,a[51],countt,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        countt=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    countt++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<countt<<" swaps."<<endl;

    }
}
