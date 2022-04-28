#include <iostream>
#include <string>
#include <stack>
using namespace std;
stack<int> stk;
void PopAndPush(int temp) {
	stk.pop();
	stk.push(temp);
	return;
}
int main() {
	string str;
	int temp = 0;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= '0') {
			stk.push(str[i] - '0');
		}
		else
		{
			temp = stk.top();
			stk.pop();
			switch (str[i])
			{
			case '+':
				temp += stk.top();
				PopAndPush(temp);
				break;

			case '-':
				if (temp > stk.top()) {
					temp -= stk.top();
				}
				else
				{
					temp = stk.top() - temp;
				}
				PopAndPush(temp);
				break;

			case '*':
				temp *= stk.top();
				PopAndPush(temp);
				break;

			case '/':
				if (temp > stk.top()) {
					temp /= stk.top();
				}
				else
				{
					temp = stk.top() / temp;
				}
				PopAndPush(temp);
				break;

			default:
				break;
			}
		}
	}
	cout << stk.top();
	return 0;
}