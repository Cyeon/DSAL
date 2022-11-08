#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define endl "\n"

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string str;
	vector<string> vec;
	map<string, bool> map;
	int n, m, answer = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		map.insert(make_pair(str, false));
	}

	for (int i = 0; i < m; i++)
	{
		cin >> str;
		if (map.find(str) != map.end()) {
			answer++;
			vec.push_back(str);
		}
	}
	cout << answer << endl;
	sort(vec.begin(), vec.end());
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
}