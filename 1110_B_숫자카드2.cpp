#include <iostream>
#include <map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, input;
	map<int, int> map; // 카드 종류, 갯수 
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		map[input] += 1;
	}

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (map.find(input) != map.end()) {
			cout << map[input] << " ";
		}
		else
		{
			cout << 0 << " ";
		}
	}
}