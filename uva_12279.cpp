#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,i=1;

	while (scanf("%d", &n), n) {

		int sum = 0, t;
		for (int i = 0; i < n; i++) {
			scanf("%d", &t);
			if (t > 0)
				sum++;
			else
				sum--;
		}
		printf("Case %d: %d\n",i++, sum);
	}

	return 0;
}
