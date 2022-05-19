#include <iostream>
#include <queue>
using namespace std;
queue<int> que;

int main() {
	int num;
	int temp;
	cout << "출력할 피보나치 수열의 개수를 입력하시오 : ";
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