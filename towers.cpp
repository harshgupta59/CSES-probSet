int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	multiset<int> st;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		auto it = st.upper_bound(x);
		if (it != st.end())
			st.erase(it);
		st.insert(x);
	}
	cout << st.size();
}
