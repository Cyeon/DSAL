#include <set>
#include <iostream>
#include <map>
using namespace std;

int main() {
	map<char, int> map;
	string str;
	int max = 0; char maxChar = '0';
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		map[str[i]] += 1;
		if (max < map[str[i]]) {
			max = map[str[i]];
			maxChar = str[i];
		}
		else if (max == map[str[i]]) {
			if (maxChar < str[i]) {
				maxChar = str[i];
			}
		}
	}
	cout << maxChar;
}