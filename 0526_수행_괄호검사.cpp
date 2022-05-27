#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main() {

	while (true)
	{
		stack<char> stk;
		string str;
		bool check = true;
		cin >> str;
		for (int i = 0; i < str.size(); i++) {
			if (stk.empty() && (str[i] == ')' || str[i] == '}' || str[i] == ']')) {
				check = false;
				break;
			}
			if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
				stk.push(str[i]);
			}
			else if (str[i] == ')') {
				if (stk.top() == '(') {
					stk.pop();
				}
				else {
					check = false;
					break;
				}
			}
			else if (str[i] == '}') {
				if (stk.top() == '{') {
					stk.pop();
				}
				else {
					check = false;
					break;
				}
			}
			else if (str[i] == ']') {
				if (stk.top() == '[') {
					stk.pop();
				}
				else {
					check = false;
					break;
				}
			}
		}
		if (!stk.empty()) { check = false; }
		if (check == false) { cout << "괄호 검사 실패" << endl; }
		else { cout << "괄호 검사 성공" << endl; }
	}
}