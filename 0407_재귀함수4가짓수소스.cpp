#include <iostream>
using namespace std;
int nFac(int n) {

	if (n == 2) {
		return n * 1;
	}
	else if (n == 1) {
		return 1;
	}
	else
	{
		return n * nFac(n - 1);
	}
}
int main() {
	int n,r;
	cin >> n>>r;
	cout << (nFac(n) )/ (nFac(r)*nFac((n-r)));
}