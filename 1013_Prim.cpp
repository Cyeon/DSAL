#include<iostream>
#include<queue>
#include <vector>
using namespace std;

bool check[30];
struct Edge {
	int n, val; //���� ���, ����ġ
	Edge(int a, int b) {
		n = a;
		val = b;
	}
	bool operator<(const Edge& b)const { //����ü ���񱳸� �ؾ��ϴµ�, ����ü�� ���� ���ؾ��ϴ��� �𸣴ϱ� �˷��ֱ� ���ؼ� ������ �����ε� ��
		return val > b.val; 
	}
};

int main() {
	priority_queue<Edge> que;
	vector<pair<int, int>> node[30]; //[]�� ù��°�� ��� ���, pair�� ù��°�� ���� ���, pair�� �ι�°�� ����ġ
	int n, m, result = 0;
	
	cin >> n >> m; //��� ��, ���� ��
	
	for (int i = 0; i < m; i++)
	{
		int a, b, val; // ��� ���, ���� ���, ����ġ 
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