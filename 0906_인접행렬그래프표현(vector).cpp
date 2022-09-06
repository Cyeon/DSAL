#include <iostream>
#include <vector>
using namespace std;
#define MAX_VTXS 256

int vecSize;

class  AdjMatGraph
{
protected:
	//int size;
	//char vertices[MAX_VTXS];
	//int adj[MAX_VTXS][MAX_VTXS];
	vector<vector<int>> vec;
public:
	AdjMatGraph() { Reset(); }
	//char GetVertex(int i) { return vec[i][0]; }
	int GetEdge(int i, int j) { return vec[i][j]; }
	void SetEdge(int i, int j, int val) { vec[i][j] = val; }
	bool IsEmpty() { return vec.empty(); }
	void Reset() {
		vec.clear();
		vec.resize(4);
		for (int i = 0; i < vec.size(); i++)
		{
			vec[i].resize(4);
		}
	}
	void InsertVertex(char name, int i)
	{
		vec[i].push_back((int)name);
	}
	void InsertEdge(int u, int v) {
		SetEdge(u, v, 1);
		SetEdge(v, u, 1);
	}
	void Display() {
		if (IsEmpty()) { return; }
		cout << "������ ���� : " << vec.size() << endl;
		for (int i = 0; i < vec.size(); i++)
		{
			cout << (char)vec[i].back()<<"\t";
			vec[i].pop_back();
			for (int j = 0; j < vec[i].size(); j++)
			{
				cout << GetEdge(i, j) << " ";
			}
			cout << endl;
		}
	}
};

int main() {
	AdjMatGraph gra;
	//cout << "������ ���� �Է�";
	//cin >> vecSize;
	for (int i = 0; i < 4; i++)
	{
		gra.InsertVertex('A' + i, i);
	}
	gra.InsertEdge(0, 1);
	gra.InsertEdge(0, 3);
	gra.InsertEdge(1, 2);
	gra.InsertEdge(1, 3);
	gra.InsertEdge(2, 3);
	cout << "���� ��ķ� ǥ���� �׷���" << endl;
	gra.Display();

}