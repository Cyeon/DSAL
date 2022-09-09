#include <iostream>
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

int main() {
	AdjMatGraph gra;
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

}