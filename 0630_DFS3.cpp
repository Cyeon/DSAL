#include<iostream>
#include<vector>
using namespace std;
int n, m, cnt;
bool check;
vector<int> vec;
void DFS(int result, int idx) {
	if (idx == n) {
		if (result == m) {
			check = true;
			cnt++;
		}
		return;
	}
	DFS(result + vec[idx], idx + 1);
	DFS(result - vec[idx], idx + 1);
	DFS(result, idx + 1);
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		vec.push_back(a);
	}
	DFS(0, 0);
	if (check) {
		cout << cnt;
	}
	else
	{
		cout << -1;
	}
}