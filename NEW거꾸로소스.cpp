#include<iostream>
using namespace std;

int main() {
	char arr[3][10] = { 0, };
	cin >> arr[0] >> arr[1] >> arr[2];

	for (int i = 0; i < 3; i++) {
		for (int j = 9; j >= 0; j--) {
			//if (arr[i][j] == '\0') { break; }
			cout << arr[i][j];
		}
		cout << endl;
	}
}