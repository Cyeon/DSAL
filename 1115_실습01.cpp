#include <iostream>
#include <set>
using namespace std;
int main() {
	set<int> set;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		set.insert(m);
	}
	cout << *(--set.end()) - *set.begin();
}