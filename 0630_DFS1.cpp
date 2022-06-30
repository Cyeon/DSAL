#include <iostream>
#include<vector>
using namespace std;
int n; int check[101];

void DFS(int L) {
	int i;
	if (L == n + 1) {
		for (i = 1; i <= n; i++) {
			if (check[i] == 1) cout << i << " ";
		}
		cout << endl;
	}
	else {
		check[L] = 1;
		DFS(L + 1);
		check[L] = 0;
		DFS(L + 1);
		//재귀 사용해서 4줄 채우기!
	}
}

int main() {
	cin >> n;
	DFS(1);
	return 0;
}