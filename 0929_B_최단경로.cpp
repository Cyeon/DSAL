#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define endl "\n"
int V, E, start, u, v, w;
const int INF = 987654321;
vector<pair<int, int>> weight[20001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> priQue;

vector<int> dijkstra(int start, int vertex) {
	vector<int> dist(vertex, INF);
	priQue.push(make_pair(0, start));
	dist[start] = 0;
	while (!priQue.empty())
	{
		int now = priQue.top().second;
		int sToNow = priQue.top().first;
		priQue.pop();

		if (dist[now] != sToNow) {
			continue;
		}

		for (auto n : weight[now])
		{
			int neighbor = n.second;
			int NowToNeighbor = n.first;
			if () {
				
				priQue.push(make_pair(dist[neighbor], neighbor));
			}
		}
	}
	return dist;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> V >> E >> start;

	for (int i = 0; i < E; i++)
	{
		cin >> u >> v >> w; //행, 열, 가중치
		weight[u].emplace_back(w, v);
	}

	vector<int> result = dijkstra(start, V + 1);

	for (int i = 1; i <= V; i++)
	{
		if (result[i] == INF) {
			cout << "INF" << endl;
		}
		else
		{
			cout << result[i] << endl;
		}
	}

	return 0;
}