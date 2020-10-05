#include<bits/stdc++.h>
using namespace std;
long long H(int n)
{
    if(n<=0)
        return 0;
    long long res = 0;
    int x =sqrt(n);
    int n1 = n;
    for (int i = 0; i < x; i++)
    {
        int temp = n/(i+1);
        res += temp + i*(n1-temp);
        n1 = temp;
    }
    if (n/x > x)
        return res+x;
    return res;
}
main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<H(n)<<endl;
    }
}
