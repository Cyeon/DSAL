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
	
	//�迭 �� ���� �� ���� ���� ����ϰ� �ؿ� �ּ�ó��

	int rNum = rand() % 10001;
	int iNums[10] = { 0, };
	int idx = 0;
	
	cout << "rNum: " << rNum << endl;

	//�������� �Ǻ���ġ ����
	for (int i = 25; rNum >= 0; i--) {
		if (i < 0) {
			break;
		}
		if (Fibo(i) <= rNum) {
			rNum = rNum - Fibo(i);
			iNums[idx] = i; //�迭 �� ���� ��쿡��
			idx++;			//�ּ�ó�� �ϱ�
		}
	}

	//0���� �������� 
	if (rNum == 0) {
		//�迭 �� ���� ���: �̸� �����ص� �������� �ٽ� �� �� ���鼭 ���
		/*for (int i = 25; ranNum >= 0; i--) {
			if (i < 0) {
				break;
			}
			if (Fibo(i) <= ranNum) {
				ranNum = ranNum - Fibo(i);
				cout << "Fibo[" << i << "]:" << Fibo(i) << endl;
			}
		}*/

		//�迭 ���� ���: �迭�� �����ص� ������ �ٽ� �ҷ��ͼ� ���
		for (int i = 0; i !=idx; i++) {
			cout << "Fibo[" << iNums[i] << "]:" << Fibo(iNums[i]) << endl;
		}
	}
	else
	{
		cout << -1; //�ƴϸ� -1 ���
	}
}