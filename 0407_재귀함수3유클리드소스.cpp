#include<iostream>
using namespace std;

int GCF(int a,int b) {
	int num;
	num = (a % b);
	if (num == 0) { return b; }

	a = b;
	b = num;
	GCF(a, b);

}

int main() {
	int a, b;
	cin >> a >> b;
	cout<<GCF(a, b);

}