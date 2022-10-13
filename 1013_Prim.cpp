#include<iostream>
#include<queue>
#include <vector>
using namespace std;

bool check[30];
struct Edge {
	int n, val; //도착 노드, 가중치
	Edge(int a, int b) {
		n = a;
		val = b;
	}
	bool operator<(const Edge& b)const { //구조체 값비교를 해야하는데, 구조체는 뭐랑 비교해야하는지 모르니까 알려주기 위해서 연산자 오버로딩 씀
		return val > b.val; 
	}
};

int main() {
	priority_queue<Edge> que;
	vector<pair<int, int>> node[30]; //[]의 첫번째는 출발 노드, pair의 첫번째는 도착 노드, pair의 두번째는 가중치
	int n, m, result = 0;
	
	cin >> n >> m; //노드 수, 간선 수
	
	for (int i = 0; i < m; i++)
	{
		int a, b, val; // 출발 노드, 도착 노드, 가중치 
		cin >> a >> b >> val;
		node[a].push_back(make_pair(b, val));
		node[b].push_back(make_pair(a, val));
	}

	que.push(Edge(1, 0));
	
	while (!que.empty())
	{
		Edge temp = que.top();
		que.pop();
		int v = temp.n;
		int cost = temp.val;

		if (check[v] == false) {
			check[v] = true;
			result += cost;
		
			for (int i = 0; i < node[v].size(); i++)
			{
				int dest = node[v][i].first;
			
				if (check[dest] == false) {
					que.push(Edge(dest, node[v][i].second));
				}
			}
		}
	}

	cout << result;
}