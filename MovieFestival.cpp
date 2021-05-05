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
		v.pb({y, x});
	}
	int ans = 1, k = 0;
	sort(v.begin(), v.end());
	for (int i = 1; i < v.size(); i++) {
		if (v[i].second >= v[k].first) {
			k = i;
			ans++;
		}
	}
	cout << ans << endl;
}
