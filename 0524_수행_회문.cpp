#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;
int main() {
	while (true)
	{
		stack<char> stk;
		queue<char> que;
		bool check = true;
		string str;
		cout << "���ڿ��� �Է��Ͻÿ� : ";
		cin >> str;
		for (int i = 0; i < str.size(); i++) {
			stk.push(str[i]);
			que.push(str[i]);
		}
		while (!stk.empty() && !que.empty())
		{
			if (stk.top() == que.front()) {
				stk.pop();
				que.pop();
			}
			else {
				check = false;
				break;
			}
		}
		if (check == true) { cout << "ȸ���Դϴ�" << endl; }
		else { cout << "ȸ���� �ƴմϴ�" << endl; }
	}
}