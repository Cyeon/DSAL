#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> vec;

	//1�� ���
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//2�� ���
	for (auto it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//3�� ���
	for (auto i : vec) {
		cout << i << " ";
	}
	cout << endl;
}