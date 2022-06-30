#include<iostream>
#include<vector>
using namespace std;
int n;
bool check;
vector<int> vec;
void DFS(int sum1, int sum2, int count) {
	if (count == n) {
		if (sum1 == sum2) {
			check = true;
		}
	}
	else {
		DFS(sum1 + vec[count], sum2, count + 1);
		DFS(sum1, sum2 + vec[count], count + 1);
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		vec.push_back(a);
	}
	DFS(0, 0, 0);
	if (check) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}