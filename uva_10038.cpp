#include<bits/stdc++.h>
using namespace std;
int n;
int ar[3100], ar1[3100];


int main() {

    while(scanf("%d", &n) == 1) {
            bool ans=true;
        for(int i = 0; i < n; i++){
            scanf("%d", &ar[i]);
        }

        for(int i = 0; i < n - 1; i++){
        ar1[i] = abs(ar[i + 1] - ar[i]);
        }

    sort(ar1, ar1 + n - 1);

    for(int i = 0; i < n - 1; i++)

        if(ar1[i] != i + 1) {
            ans=false;
        }

        if(ans==false){
    printf("Not jolly\n");
        }

        else{
    printf("Jolly\n");
        }

    }
    return 0;
}
