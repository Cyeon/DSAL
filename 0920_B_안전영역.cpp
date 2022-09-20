#include <iostream>
using namespace std;

int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };

int arr[100][100], cnt, result;
bool visited[100][100];

void DFS(int n, int y, int x, bool first) {
	if (visited[y][x]) { return; }
	visited[y][x] = true;
	if (arr[y][x] <= n) { return; }
	if (first) { cnt++; }
	if (cnt > result) { result = cnt; }
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if ((ny < 0 || ny >= 100) || (nx < 0 || nx >= 100)) { continue; }
		DFS(n, ny, nx, false);
	}
}

int main() {
	int n, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
			if (max <= arr[i][j]) { max = arr[i][j]; }
		}
	}
	for (int rain = 0; rain < max; rain++)
	{
		cnt = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				visited[i][j] = false;
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				DFS(rain, i, j, true);
			}
		}
	}

	cout << result;
}