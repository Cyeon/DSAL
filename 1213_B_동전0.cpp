#include <iostream>
#include <algorithm>
#include <vector>
#define endl "\n"
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int answer = 0;
	int n, k;
	vector<int> vec;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int v;
		cin >> v;
		vec.push_back(v);
	}
	reverse(vec.begin(), vec.end());

	for (long long int i = 0; i < vec.size(); i++)
	{
		if (vec[i] > k) { continue; }

		int value = k / vec[i];
		if (value > 0) {
			int m = k % vec[i];
			answer += (k / vec[i]);
			k = m;
		}
	}

	cout << answer;
}