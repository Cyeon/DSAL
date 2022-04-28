#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

void OddNum(int a, int b) {
	if (a > b) { return ; }
	if (a % 2 != 0) {
		cout << a << " ";
	}
	a++;
	OddNum(a, b);
	return ;
}

int main() {
	cout << "작은 수부터 두 수를 입력하시오 : " << endl;
	int a, b;
	cin >> a >> b;
	OddNum(a, b);

	
	
	return 0;
}