#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int> vec;
	int n, m;
	int cnt = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		vec.push_back(a);
	}
	for (int i = 0; i < n; i++)
	{
		int ingre1 = vec[i];
		for (int j = i + 1; j < n; j++)
		{
			int ingre2 = vec[j];
			if (ingre1 + ingre2 == m) {
				cnt++;
				break;
			}
		}
	}
	cout << cnt;
}