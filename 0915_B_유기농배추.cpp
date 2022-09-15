#include<iostream>
#include <vector>
using namespace std;

bool visited[50][50];
int arr[50][50], result;
int m, n, k;
int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };
void DFS(int y, int x, bool first) {
	if (visited[y][x] || arr[y][x] == 0) { return; }
	if (first) { result++; }
	visited[y][x] = true;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if ((ny < 0 || ny >= n) || (nx < 0 || nx >= m)) { continue; }
		DFS(ny, nx, false);
	}
}
int main() {
	int t;
	cin >> t;
	for (int roop = 0; roop < t; roop++)
	{
		for (int i = 0; i < 50; i++)
		{
			for (int j = 0; j < 50; j++)
			{
				arr[i][j] = 0;
			}
		}
		cin >> m >> n >> k;
		for (int i = 0; i < k; i++)
		{
			int y, x;
			cin >> y >> x;
			arr[y][x] = 1;
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				DFS(i, j, true);
			}
		}
		cout << result;
		result = 0;
	}
}