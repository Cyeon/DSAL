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
		cout << "문자열을 입력하시오 : ";
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
		if (check == true) { cout << "회문입니다" << endl; }
		else { cout << "회문이 아닙니다" << endl; }
	}
}