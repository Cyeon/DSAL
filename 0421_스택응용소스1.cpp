#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	stack<int> stk;
	string str;
	int idx = 1;
	cout << "수식 : ";
	cin >> str;
	cout << "괄호 번호 : ";
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			cout << idx;
			stk.push(idx);
			idx++;
		}
		else
		{
			cout << stk.top();
			stk.pop();
		}
	}
}