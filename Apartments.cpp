#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m, k;
	cin >> n >> m >> k;
	long long a[n], b[m], p = 0, q = 0, ans = 0;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int j = 0; j < m; j++)
		cin >> b[j];
	sort(a, a + n);
	sort(b, b + m);

	while (p < n && q < m) {
		if (b[q] >= a[p] - k && b[q] <= a[p] + k) {
			ans++;
			q++, p++;
		}
		else if (b[q] < a[p] - k)
			q++;
		else
			p++;

	}
	cout << ans << endl;
}
