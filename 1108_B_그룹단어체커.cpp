#include <iostream>
#include <unordered_map>
using namespace std;
#define endl "\n"

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		bool check = true;
		string str;
		cin >> str;

		unordered_map<char, bool> uMap;
		for (int j = 0; j < str.length(); j++)
		{
			if (j != 0) {
				if (str[j] == str[j - 1]) { continue; }
				if (uMap.find(str[j]) != uMap.end()) {
					check = false;
					break;
				}
				else
				{
					uMap[str[j]] = false;
				}
			}
			else
			{
				uMap[str[j]] = false;
			}
		}

		if (check) {
			result++;
		}
	}
	cout << result;
}