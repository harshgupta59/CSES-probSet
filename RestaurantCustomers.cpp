int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n;
	cin >> n;
	vector<pair<int, int>  > v;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v.pb({x, 0});
		v.pb({y, 1});
	}
	int ans = 0, k = 0;
	sort(v.begin(), v.end());
	for (auto x : v) {
		if (x.ss == 0)
			k++;
		else
			k--;
		ans = max(ans, k);
	}
	cout << ans << endl;
}
