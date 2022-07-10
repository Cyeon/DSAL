#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int sum = 0;
	int fee[4];
	int a, b, c;
	vector<pair<int, int>>vec;
	cin >> a >> b >> c;
	fee[0] = 0; fee[1] = a; fee[2] = b; fee[3] = c;
	for (int i = 0; i < 3; i++)
	{
		int start, end;
		cin >> start >> end;
		vec.push_back(make_pair(start, end));
	}
	for (int i = 1; i <= 100; i++)
	{
		int cnt = 0;
		for (int j = 0; j < 3; j++)
		{
			if (vec[j].first <= i && vec[j].second > i) {
				cnt++;
			}
		}
		sum += fee[cnt] * cnt;
	}
	cout << sum;
}