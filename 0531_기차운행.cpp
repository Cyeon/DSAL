#include<iostream>
#include<stack>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	while (true)
	{
		stack<int> stk;
		string result = "";
		int n, input, cnt = 1;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> input;
			stk.push(input);
			result += 'P';
			while (!stk.empty())
			{
				if (cnt == stk.top()) {

				}
				else
				{
					break;
				}
			}
		}
	}
}