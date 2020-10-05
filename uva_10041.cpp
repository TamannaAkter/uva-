#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, r, median, s[1000], ans;

	cin>>t;
	while (t--) {
		cin>>r;

		for (int i = 0; i < r; i++) {
			scanf("%d", &s[i]);
		}
		sort(s, s + r);
		median = s[r / 2];

		ans = 0;
		for (int i = 0; i < r; i++) {
			ans += abs(median - s[i]);
		}

		printf("%d\n", ans);
	}

	return 0;
}
