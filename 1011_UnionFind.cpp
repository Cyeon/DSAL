#include<iostream>
using namespace std;

int parent[1001];
int Find(int v) {
	if (v == parent[v]) {
		return v;
	}
	return Find(parent[v]);
}

void Union(int a, int b) {
	a = Find(a);
	b = Find(b);
	if (a != b) {
		parent[a] = b;
	}
}

int main() {
	int n, m, a, b, fa, fb;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		parent[i + 1] = i + 1;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		Union(a, b);
	}
	cin >> a >> b;
	fa = Find(a);
	fb = Find(b);
	if (fa == fb) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}