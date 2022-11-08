#include <iostream>
#include <map>
#include <string>
using namespace std;
#define endl "\n"

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	string result;
	map<string, int> map1;
	map<string, int>::iterator iter;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		if (map1.find(str) != map1.end()) {
			map1[str] = map1[str] + 1;
		}
		else
		{
			map1.insert(make_pair(str, 1));
		}
	}

	n = 0;

	while (!map1.empty())
	{
		iter = --map1.end();

		if (iter->second >= n) {
			result = iter->first;
			n = iter->second;
		}
		map1.erase(iter->first);
	}
	cout << result;
}