#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	vector<int> vec;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		vec.push_back(a);
	}
	sort(vec.begin(), vec.end());
	cout << vec.end() - vec.begin();
}