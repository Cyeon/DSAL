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
	void Push(int data) {
		_heap.push_back(data);
		int now = static_cast<int>(_heap.size()) - 1;
		while (now > 0)
		{
			int next = (now - 1) / 2;
			if (_heap[now] <= _heap[next])break;
			swap(_heap[now], _heap[next]);
			now = next;
		}
	}
	void pop() {

		_heap[0] = _heap.back();
		_heap.pop_back();
		int parent = 0;
		int child = 1;
		while (child <= static_cast<int>(_heap.size()) - 1)
		{
			if (child < _heap.size() - 1)
				if (_heap[child] < _heap[child + 1])
					child++;
			if (_heap[child] < _heap[parent]) break;
			swap(_heap[child], _heap[parent]);
			parent = child;
			child = child * 2 + 1;
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