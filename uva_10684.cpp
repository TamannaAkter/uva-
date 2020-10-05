#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    while(cin >> n && n != 0)
    {
        int sum = 0,a,mx = -9999;
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
            if(sum > mx)
                mx = sum;
            if(sum < 0)
                sum = 0;
        }
        (mx > 0) ? cout << "The maximum winning streak is " << mx << "." << endl : cout << "Losing streak." << endl;
    }
    return 0;
}
