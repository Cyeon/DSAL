#include <iostream>
#include <queue>
using namespace std;
#define MAX_VTXS 256

class  AdjMatGraph
{
protected:
	int size;
	char vertices[MAX_VTXS];
	int adj[MAX_VTXS][MAX_VTXS];
public:
	AdjMatGraph() { Reset(); }
	char GetVertex(int i) { return vertices[i]; }
	int GetEdge(int i, int j) { return adj[i][j]; }
	void SetEdge(int i, int j, int val) { adj[i][j] = val; }
	bool IsEmpty() { return size == 0; }
	bool IsFull() { return size >= MAX_VTXS; }
	void Reset() {
		size = 0;
		for (int i = 0; i < MAX_VTXS; i++)
		{
			for (int j = 0; j < MAX_VTXS; j++)
			{
				SetEdge(i, j, 0);
			}
		}
	}
	void InsertVertex(char name)
	{
		if (IsFull()) { return; }
		size++;
		vertices[size - 1] = name;
	}
	void InsertEdge(int u, int v) {
		SetEdge(u, v, 1);
		SetEdge(v, u, 1);
	}
	void Display() {
		if (IsEmpty()) { return; }
		cout << "정점의 개수 : " << size << endl;
		for (int i = 0; i < size; i++)
		{
			cout << GetVertex(i) << "\t";
			for (int j = 0; j < size; j++)
			{
				cout << GetEdge(i, j) << " ";
			}
			cout << endl;
		}
	}
};

class SearchGraph :public AdjMatGraph {
public:
	int visited[MAX_VTXS];
	void ResetVisited() {
		for (int i = 0; i < size; i++)
		{
			visited[i] = false;
		}
	}
	bool IsLinked(int u, int v) {
		return GetEdge(u, v) != 0;
	}
	void DFS(int v) {
		if (visited[v] == true) { return; }
		visited[v] = true;
		cout << GetVertex(v) << " ";
		for (int i = 0; i < size; i++)
		{
			if (IsLinked(v + 1, i)) {
				DFS(v + 1);
			}
		}
	}
	void BFS(int v) {
		fill_n(visited, MAX_VTXS, -1);
		visited[v] = v;
		int n = v;
		queue<char> que;
		que.push(v);
		while (!que.empty())
		{
			n += 1;
			int i = que.front();
			cout << GetVertex(i) << " ";
			que.pop();
			for (int j = 0; j < size; j++)
			{
				if (IsLinked(i, j) && visited[j] == -1) {
					visited[j] = n;
					que.push(j);
				}
			}
		}
	}

};

int main() {
	SearchGraph gra;
	for (int i = 0; i < 4; i++)
	{
		gra.InsertVertex('A' + i);
	}
	gra.InsertEdge(0, 1);
	gra.InsertEdge(0, 3);
	gra.InsertEdge(1, 2);
	gra.InsertEdge(1, 3);
	gra.InsertEdge(2, 3);
	cout << "인접 행렬로 표현한 그래프" << endl;
	gra.Display();
	/*cout << endl << endl << "DFS 탐색 => ";
	gra.ResetVisited();
	gra.DFS(0);*/
	gra.ResetVisited();
	gra.BFS(0);
	for (int i = 0; i < MAX_VTXS; i++)
	{
		if (gra.visited[i] == -1) { continue; }
		cout << gra.visited[i] << " ";
	}
}