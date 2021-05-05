int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n, m;
	cin >> n >> m;
	multiset<int, greater<int>> st;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		st.insert(x);
	}

	while (m--) {
		int x;
		cin >> x;
		auto it = st.lower_bound(x);
		if (it != st.end()) {
			cout << (*it) << endl;
			st.erase(it);
		}
		else
			cout << -1 << endl;
	}
}

