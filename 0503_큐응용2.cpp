#include <iostream>
#include <queue>
using namespace std;
queue<int> que;

int main() {
	int num;
	int temp;
	cout << "����� �Ǻ���ġ ������ ������ �Է��Ͻÿ� : ";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		if (i == 1 || i == 2) {
			que.push(1);
			cout << que.back()<<" ";
			continue;
		}
		temp = que.front();
		que.pop();
		que.push(temp + que.front());
		cout << que.back()<<" ";
	}
}