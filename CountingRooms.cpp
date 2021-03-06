int n, m;
int vis[1001][1001];
char a[1001][1001];
bool isvalid(int x, int y) {
	if ((x <= n && x >= 1 && y <= m && y >= 1) && a[x][y] != '#' && vis[x][y] == 0)
		return true;
	else
		return false;
}
void dfs(int x, int y) {
	vis[x][y] = 1;
	if (isvalid(x - 1, y))
		dfs(x - 1, y);
	if (isvalid(x, y + 1))
		dfs(x, y + 1);
	if (isvalid(x + 1, y))
		dfs(x + 1, y);
	if (isvalid(x, y - 1))
		dfs(x, y - 1);
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cin >> n >> m;
	int ans = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j], vis[i][j] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (vis[i][j] == 0 && a[i][j] != '#') {
				dfs(i, j);
				ans++;
			}
		}
	}
	cout << ans;
}
