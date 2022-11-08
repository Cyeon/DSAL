#include<iostream>
#include <map>
#include <string>
using namespace std;
#define endl "\n"

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	map <string, int> map1;
	map<int, string> map2;

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		map1[str] = i + 1;
		map2[i + 1] = str;
	}

	for (int i = 0; i < m; i++)
	{
		string str;
		cin >> str;
		if (map1.find(str) != map1.end()) {
			cout << map1[str] << endl;
		}
		else
		{
			cout << map2[stoi(str)] << endl;
		}
	}
}