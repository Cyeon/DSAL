#include <iostream>
#include<vector>
using namespace std;
class PriorityQueue {
private:
	vector<int> _heap = {};

public: 
	int top() {
		return _heap[0];
	}
	bool empty() {
		return _heap.empty();
	}
	void Push(int num) {

	}
	void pop() {
		_heap[0] = _heap.back();
		_heap.pop_back();
		int parent = 0;
		int child = 1;
		while (child<=static_cast<int>(_heap.size())-1)
		{
			if (child < _heap.size() - 1) {
			
			}
			if () { break; }
		
		
		}
	}
};


int main() {
	PriorityQueue pq;
	pq.Push(100);
	pq.Push(300);
	pq.Push(200);
	pq.Push(500);
	pq.Push(400);
	while (!pq.empty())
	{
		cout << pq.top() << endl;
		pq.pop();
	}
}