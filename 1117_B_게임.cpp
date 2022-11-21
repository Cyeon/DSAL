#include <iostream>
using namespace std;

int main() {
	long long int x, y, result = 0;
	cin >> x >> y;

	int z = y * 100 / x;

	if (z == 100 || z == 99) {
		cout << -1;
		return 0;
	}

	int min = 0, max = 1000000000;
	while (min <= max)
	{
		int mid = (max + min) / 2;
		int newZ = (y + mid) * 100 / (x + mid);
		if (newZ > z) {
			max = mid - 1;
		}
		else
		{
			min = mid + 1;
			result = min;
		}
	}
	cout << result;
}