#include<iostream>
#include <random>
#include <time.h>
using namespace std;
int fiboMap[10000] = { 0, };
int Fibo(int n) {
	if (fiboMap[n] > 0) {
		return fiboMap[n];
	}
	else 
		return fiboMap[n] = Fibo(n-1) + Fibo(n-2);
}
int main() {
	fiboMap[1] = fiboMap[2] = 1;
	srand(unsigned int(time(NULL)));

	
	//int ranNum=rand() % 10001;
	//int rNum=ranNum;
	
	//배열 안 쓰고 할 때는 위에 사용하고 밑에 주석처리

	int rNum = rand() % 10001;
	int iNums[10] = { 0, };
	int idx = 0;
	
	cout << "rNum: " << rNum << endl;

	//난수에서 피보나치 빼기
	for (int i = 25; rNum >= 0; i--) {
		if (i < 0) {
			break;
		}
		if (Fibo(i) <= rNum) {
			rNum = rNum - Fibo(i);
			iNums[idx] = i; //배열 안 쓰는 경우에는
			idx++;			//주석처리 하기
		}
	}

	//0으로 떨어지면 
	if (rNum == 0) {
		//배열 안 쓰는 경우: 미리 저장해둔 난수에서 다시 한 번 빼면서 출력
		/*for (int i = 25; ranNum >= 0; i--) {
			if (i < 0) {
				break;
			}
			if (Fibo(i) <= ranNum) {
				ranNum = ranNum - Fibo(i);
				cout << "Fibo[" << i << "]:" << Fibo(i) << endl;
			}
		}*/

		//배열 쓰는 경우: 배열에 저장해둔 값으로 다시 불러와서 출력
		for (int i = 0; i !=idx; i++) {
			cout << "Fibo[" << iNums[i] << "]:" << Fibo(iNums[i]) << endl;
		}
	}
	else
	{
		cout << -1; //아니면 -1 출력
	}
}