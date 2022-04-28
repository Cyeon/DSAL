#include<iostream>
using namespace std;

int main() {
	char arr[3][30] = { 0, };
	//cin >> arr[0] >> arr[1] >> arr[2];
	for (int i = 0; i < 3; i++) {
		cin.getline(arr[i], 30); 
	}
	
	for (int i = 0; i < 3; i++) {
		int a = strlen(arr[i]);
		for (int j = a; j >= 0; j--) {
			cout << arr[i][j];
		}
		cout << endl; 
	}
}