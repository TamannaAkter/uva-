#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while (scanf("%lld", &n)!=EOF)
    {
        if(n<0)
            break;
        else
            cout<<(n * (n + 1) / 2 + 1)<<endl;
    }

    return 0;
}
