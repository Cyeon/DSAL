#include <iostream>
#include <algorithm>
using namespace std;
class Queue {
public:
	int qSize;
	int front;
	int rear;
	int* buf;
	void InitQueue(int qSize) {
		this->qSize = qSize;
		buf = new int[qSize];
		front = 0;
		rear = 0;
	}
	void EnQueue(int data) {
		if (IsFull() == true) {
			cout << "큐가 꽉 찼음" << endl;
			return;
		}
		else
		{
			rear = (rear + 1) % qSize;
			buf[rear] = data;
		}
	}
	int DeQueue() {
		if (IsEmpty() == true) {
			return front;
		}
		else
		{
			front = (front + 1) % qSize;
			return buf[front];
		}
	}
	int IsFull() {
		if (front ==(rear + 1)%qSize) {
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int IsEmpty() {
		if (front==rear) {
			cout << "큐가 비었음" << endl;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int PrintFront() {
		return front;
	}
	int PrintReal() {
		return rear;
	}
};

//Print 부분만 구현이 안 되어서 예시코드 보고 했습니다 
void PrintQueue(Queue q) {
	cout << "front=" << q.front << " " << "rear = " << q.rear << " "; 
	if (!q.IsEmpty()) { 
		int i = q.front;
		do {
			i = (i + 1) % q.qSize;
			cout << " | " << q.buf[i];
			if (i == q.rear) {
				cout << " | ";
				break;
			}
		} while (i != q.front);
	}
	cout << endl;
}
int main() {
	Queue q1;
	q1.InitQueue(4);
	for (int i = 1; i < 5; i++) {
		q1.EnQueue(i);
		PrintQueue(q1);
	}
	for (int i = 1; i < 5; i++) {
		q1.DeQueue();
		PrintQueue(q1);
	}
	for (int i = 1; i < 5; i++) {
		q1.EnQueue(i);
		PrintQueue(q1);
	}
}