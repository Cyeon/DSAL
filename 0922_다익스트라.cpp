#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAX_VTXS 256
#define INF 9999
int V, E, start, u, v, w;
vector<pair<int, int>> weight[20001];
const int INF = 987654321;
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
				SetEdge(i, j, INF);
			}
		}
	}
	void InsertVertex(char name)
	{
		if (IsFull()) { return; }
		size++;
		vertices[size - 1] = name;
	}
	void InsertEdge(int u, int v, int a) {
		SetEdge(u, v, a);
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

class shortestPath :public AdjMatGraph {
	int dist[MAX_VTXS];
	bool found[MAX_VTXS];
	int parent[MAX_VTXS];
public:
	void PrintDistance() {
		for (int i = 0; i < size; i++)
		{
			cout << dist[i] << " ";
		}
		cout << endl;
	}
	int ChooseVertex() {
		int min = INF;
		int minPos = 1;
		for (int i = 0; i < size; i++)
		{
			if (min > dist[i] && found[i] == false) {
				min = dist[i];
				minPos = i;
			}
		}
		return minPos;
	}
	void Dijikstra(int start, int end) {
		for (int i = 0; i < size; i++)
		{
			dist[i] = GetEdge(start, i);
			found[i] = false;
		}
		fill_n(parent, size, -1);
		found[start] = true;
		dist[start] = 0;
		parent[start] = start;
		int next, current = start;
		cout << start << " 정점에서 시작!" << endl;
		for (int i = 0; i < size; i++)
		{
			if (current == end) {
				cout << "목적 정점 " << end << "에 도착!" << endl;
				break;
			}

			cout << "Step " << i + 1 << " : ";
			PrintDistance();
			next = ChooseVertex();
			cout << next << " 정점에 안착 !" << endl;
			found[next] = true;
			for (int w = 0; w < size; w++)
			{
				if (!found[w] && dist[w] > dist[next] + GetEdge(next, w)) {
					dist[w] = dist[next] + GetEdge(next, w);
					parent[w] = next;
				}
			}
			current = next;
		}
	}
	void printPath(int start, int target) {
		if (start == target) {
			cout << "최단 경로는 " << start;
			return;
		}
		printPath(start, parent[target]);
		cout << " " << 
	}
};
int main() {
	shortestPath gra;
	for (int i = 0; i < 7; i++)
	{
		gra.InsertVertex('A' + i);
	}
	gra.InsertEdge(0, 1, 2);
	gra.InsertEdge(0, 2, 7);
	gra.InsertEdge(1, 2, 1);
	gra.InsertEdge(1, 3, 3);
	gra.InsertEdge(2, 4, 4);
	gra.InsertEdge(2, 5, 5);
	gra.InsertEdge(3, 2, 2);
	gra.InsertEdge(3, 4, 3);
	gra.InsertEdge(4, 5, 4);
	gra.InsertEdge(4, 6, 1);
	gra.InsertEdge(5, 6, 5);

	gra.Dijikstra(0, 5);
}