#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	while (true)
	{
		stack<char>stk;
		int n, k;
		cin >> n >> k;
		if (n == 0) {
			cout << n << endl;
			continue;
		}
		while (n >= k) {
			if (n % k < 10) {
				stk.push((n % k) + '0');
			}
			else
			{
				stk.push((n % k) + 55);
			}
			n = n / k;
		}
		if (n != 0) {
			if (n % k < 10) {
				stk.push((n % k) + '0');
			}
			else
			{
				stk.push((n % k) + 55);
			}
		}
		
		while (!stk.empty()) {
			cout << stk.top();
			stk.pop();
		}
		cout << endl;
	}
}