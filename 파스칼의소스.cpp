#include <iostream>
using namespace std;
int main() {
	int a[10][10] = { 0, };
	int num = 0;
	//int i, j;
	for (int i = 0; i < 10; i++) {
		a[i][0] = 1;
	}

	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 10; j++) {
			if (i!=0&&j!=0) {
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
			if (a[i][j] != 0) {
				cout << a[i][j]<<" ";
			}
		}
			cout << endl;
	}

	int b[100];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j > 0 && i > 0) {
				b[i * 10 + j] = b[(i - 1) * 10 + j] + b[(i - 1) * 10 + j - 1];
			}
			if (a[i * 10 + j] > 0)
				cout << a[i * 10 + j] << " ";
		}
		cout << endl;
	}
}
//�� ���� ����(i-1) j-1 + j �̰ǰ�? 
//���(0�� �ȵ�, �� ������ �� �ٲ�) �ذ�

//1���� �迭�� ���� 
//100 ���� �����ϰ� 10�� ������� endl �ϸ� �� �ǳ� 
//�׸��� ���� ��... ���� ����ŭ []���� ���̳ʽ� ���Ѽ� ���ϸ�?
//�ٵ� �̰� �� �𸣰ڴ� 