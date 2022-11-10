#include <iostream>
#include <unordered_set>
#define endl "\n"
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	unordered_set<int> uSet;
	int n, input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		uSet.insert(input);
	}

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (uSet.find(input) != uSet.end()) {
			cout << 1 << endl;
		}
		else
		{
			cout << 0 << endl;
		}
	}
}