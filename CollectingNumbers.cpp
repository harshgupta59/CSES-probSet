int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a[n + 1];
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	vector < int> pos(n + 1);
	for (int i = 1; i <= n; i++)
		pos[a[i]] = i;
	int ans = 0;
	for (int i = 2; i <= n; i++) {
		if (pos[i - 1] > pos[i])
			ans++;
	}
	cout << ans + 1 << endl;
}
