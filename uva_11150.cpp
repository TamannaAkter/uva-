#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int arr[MAX];

int main()
{
    int i, j, k;
    int test, t;
    int arr[5];
    for(i=0; i<4; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr, arr+4);
    if(arr[0]+arr[1]>arr[2] || arr[1]+arr[2]>arr[3])
    {
        printf("TRIANGLE\n");
    }
    else if(arr[0]+arr[1]==arr[2] || arr[1]+arr[2]==arr[3])
    {
        printf("SEGMENT\n");
    }
    else
    {
        printf("IMPOSSIBLE\n");
    }
}
