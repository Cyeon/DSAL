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
//값 저장 윗열(i-1) j-1 + j 이건가? 
//출력(0은 안됨, 행 끝나면 줄 바꿈) 해결

//1차원 배열은 아직 
//100 정도 선언하고 10의 배수마다 endl 하면 안 되나 
//그리고 뭐냐 그... 일정 수만큼 []에서 마이너스 시켜서 더하면?
//근데 이건 잘 모르겠다 