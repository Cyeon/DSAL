#include <iostream>
using namespace std;
class Queue {
	int* buf;
	int qSize;
	int front;
	int real;
	//int count;

public :
	void InitQueue(int qSize) {
		this->qSize = qSize;
		buf = new int[qSize];
		front = -1;
		real = -1;	
//		count = 0;
	}
	void EnQueue(int data) {
		if (IsFull()==true) {
			cout << "Å¥°¡ ²Ë Ã¡À½" << endl;
			return;
		}
		else
		{
			real++;
			buf[real] = data;
			//count++;
		}
	}
	int DeQueue() {
		if (IsEmpty()==true) {
			return front;
		}
		else
		{
			front++;
			//count--;
			return buf[front];
		
		}
	}
	int IsFull() {
		if (qSize == real+1) {
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int IsEmpty() {
		if (front==real&&front!=-1) {
			return 1;
		}
		else
		{
			return 0;
		}
	}
};
int main() {
	int i;
	Queue q1;
	q1.InitQueue(10);
	for (int i = 0; i < 11; i++) {
		cout << i + 1 << " ÀÔ·Â" << endl;
		q1.EnQueue(i + 1);
	}
	cout << endl << endl;
	while (!q1.IsEmpty()) {
		cout << q1.DeQueue() << " Ãâ·Â" << endl;
	}
	cout << endl;
	return 0;
}