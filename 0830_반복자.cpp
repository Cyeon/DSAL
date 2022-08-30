#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> vec;

	//1锅 规过
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//2锅 规过
	for (auto it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//3锅 规过
	for (auto i : vec) {
		cout << i << " ";
	}
	cout << endl;
}