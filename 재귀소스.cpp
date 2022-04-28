#include <iostream>
using namespace std;
int fibo[10000] = { 0, };

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

int nSum(int n) {
	if (n == 1) { return 1; }
	return n + nSum(n - 1);
}

int MaxNum(int fives[], int len, int max) {
	if (fives[len - 1] > max) {
		max = fives[len - 1];
	}
	len--;
	if (len == 0) { return max; }
	else { return MaxNum(&fives[len], len, max); }
}

int Fibo(int n) {
	if (fibo[n] != 0) {
		return fibo[n];
	}
	if (n == 1 || n == 2) {
		return fibo[n] = 1;
	}
	else {
		return fibo[n] = Fibo(n - 2) + Fibo(n - 1);
	}
}

int main() {
	int input, max = 0, len = 0;
	int fibo[10000] = { 0, };
	//cin >> input;

	//cout <<"!n: " << nFac(input) << endl;
	//cout << "1~n sum: " << nSum(input) << endl;
	//cout << "n Fibo: "<<Fibo(input)<<endl;

	//int fives[5];
	//for (int i = 0; i < 5; i++) {
	//	cin >> fives[i];
	//	len++;
	//}
	//cout << "Five Max: " << MaxNum(fives, len, max);

	while (true)
	{
		cout << "°ª ÀÔ·Â: ";
		cin >> input;

		for (int i = 0; i <= input-1; i++) {
			if (fibo[input-1] == 0) {
				if (i < 2) { fibo[i] = 1; }
				else {
					fibo[i] = fibo[i - 2] + fibo[i - 1];
				}
			}
			else { break; }
		}
		cout << fibo[input-1] << endl;
	}	
}