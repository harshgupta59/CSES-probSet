int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, x;
	cin >> n >> x;
	pair<int, int> a[n];
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[i] = {x, i};
	}
	sort(a, a + n);
	int left = 0, right = n - 1;
	while (left < right) {
		if (a[right].first + a[left].first == x) {
			cout << a[right].second + 1 << " " << a[left].second + 1 << endl;
			return 0;
		}
		else if (a[right].first + a[left].first > x)
			right--;
		else
			left++;
	}
	cout << "IMPOSSIBLE" << endl;
}
