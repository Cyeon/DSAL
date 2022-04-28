#include <iostream>
#include <stack>
#include <string>
using namespace std;
//�۵��� �������� �ʹ� �밡�� �ڵ� ���Ƽ� ���
int main() {
	string str;
	cin >> str;	
	stack<char> stk;
	for (int i = 0; i < str.length(); i++) {
		switch (str[i]) {
		case '(':
		case '{':
		case '[':
			stk.push(str[i]);
			break;
		case ')':
			if (stk.top() != '('||stk.empty()) {
				cout << "��ȣ �˻� ����";
				return 0;
			}
			else {
				stk.pop();
			}
			break;
		case '}':
			if (stk.top() != '{' || stk.empty()) {
				cout << "��ȣ �˻� ����";
				return 0;
			}
			else {
				stk.pop();
			}
			break;

		case']':
			if (stk.top() != '[' || stk.empty()) {
				cout << "��ȣ �˻� ����";
				return 0;
			}
			else {
				stk.pop();
			}
			break;
		default:
			break;
		}

	}
	cout << "��ȣ �˻� ����";
}