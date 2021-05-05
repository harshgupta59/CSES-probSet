#include<bits/stdc++.h>
using namespace std;
#define OPTIMIZE() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define MOD 1000000007
#define ll long long
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n, x;
	cin >> n >> x;
	ll ans = 0, left = 0, right = n - 1;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);

	while (left <= right) {
		if (x - a[right] >= a[left])
			left++;
		ans++, right--;
	}
	cout << ans << endl;
}
