#include <iostream>
#include <queue>
using namespace std;
#define MAX_VTXS 256
#define INF 9999
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

class shortestPath :public AdjMatGraph {
	int dist[MAX_VTXS];
	bool found[MAX_VTXS];
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
	void Dijikstra(int start) {
		for (int i = 0; i < size; i++)
		{
			dist[i] = GetEdge(start, i);
			found[i] = false;
		}
		found[start] = true;
		dist[start] = 0;
		for (int i = 0; i < size; i++)
		{
			cout << "Step " << i + 1 << " : ";
			PrintDistance();
			int u = ChooseVertex();
			found[u] = true;
			for (int w = 0; w < size; w++)
			{
				/*if (found[w]==false&&) {
					dist[w]=
				}*/
			}
		}
	}
};

int main() {

}