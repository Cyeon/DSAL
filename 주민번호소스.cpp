#include <iostream>
using namespace std;

void Gender(char num[]) {
	if (num[6] == '1' || num[6] == '3') {
		cout << "����" << endl;
	}
	else if (num[6] == '2' || num[6] == '4') {
		cout << "����" << endl;
	}
}
//string Vaildation(char* arr) {
//	int testArr[13] = { 2,3,4,5,6,7,8,9,2,3,4,5 };
//	int sum = 0;
//	string yes = "��ȿ ��ȣ";
//	string no = "��ȿ ��ȣ";
//	for (int i = 0; i < 12; i++) {
//
//	}
//}
	
int main() {
	char num[14];
	int bornY;	
	int sum=0;
	int idx = 2;
	int m=0;
	cout << "�ֹ� ��ȣ �Է�: ";
	cin >> num;

	if (num[6] - '2' <= 0) {
		bornY = 1900;
	} 
	else { bornY = 2000; }
	bornY += (num[0] - '0') * 10;
	bornY += num[1] - '0';
	
	for (int i =0; i < 13; i++) {
		sum += (num[i] - '0') * idx;
		idx++;
		if (idx > 9)
			idx = 2;
	}
	//sum += (num[12] - '0');
	//m = sum % 11;
	m = (11-(sum % 11) )% 10;//�̰�Ʋ�ȳ�?
	//���� sum�� ������ �� ������ 
	//����
	//����???
	cout << "�¾ �⵵: " << bornY << endl;
	Gender(num);
	cout << "����:" << 2022 - bornY + 1<<endl;
	if (m == (num[12] - '0')) {
		cout << "��ȿ�� ��ȣ�Դϴ�." << endl;
	}
	else {
		cout << num[12]<<endl<<m << "��ȿ";
	}
}