#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	stack<char> stk;
	string arr;
	int a;
	cin >> arr;
	for (int i = arr.length() - 1; i >= 0; i--) {
		stk.push(arr[i]);
	}
	a = arr.length() % 3;
	//�̰� ���� ������ 
	if (a != 0) {
		for (int i = 0; i < a; i++) {
			cout << (stk.top());
			stk.pop();
		}
		cout << ",";
	}

	//�̰� �� ó���� 2���� ��������??
	//i�� 1���� 0���� ���ļ� �ذ� 
	for (int i = 0; i < arr.length() - a; i++) {
		if (i % 3 == 0 && i != 0) {
			cout << ",";
		}
		cout << (stk.top());
		stk.pop();
	}
}
