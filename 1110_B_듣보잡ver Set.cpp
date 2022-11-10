#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	unordered_set<string> set;
	vector<string> vec;
	string str;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		set.insert(str);
	}

	for (int i = 0; i < m; i++)
	{
		cin >> str;
		if (set.find(str) != set.end()) {
			vec.push_back(str);
		}
	}
	sort(vec.begin(), vec.end());
	cout << vec.size() << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
}