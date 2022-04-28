#include <iostream>
#include <stack>
#include <string>
using namespace std;
//작동은 괜찮은데 너무 노가다 코드 같아서 고민
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
				cout << "괄호 검사 실패";
				return 0;
			}
			else {
				stk.pop();
			}
			break;
		case '}':
			if (stk.top() != '{' || stk.empty()) {
				cout << "괄호 검사 실패";
				return 0;
			}
			else {
				stk.pop();
			}
			break;

		case']':
			if (stk.top() != '[' || stk.empty()) {
				cout << "괄호 검사 실패";
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
	cout << "괄호 검사 성공";
}