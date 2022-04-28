#include<iostream>
using namespace std;
int arr[5] = { 0, };
int num = 0;
void MaxNum(int a) {
	if (a < 0) { return; }
	if(num<=arr[a]){num=arr[a]; }
	MaxNum(a - 1);
}

int main() {
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	MaxNum(4);
	cout << num;
}