#include <iostream>
using namespace std;

void Gender(char num[]) {
	if (num[6] == '1' || num[6] == '3') {
		cout << "남성" << endl;
	}
	else if (num[6] == '2' || num[6] == '4') {
		cout << "여성" << endl;
	}
}
//string Vaildation(char* arr) {
//	int testArr[13] = { 2,3,4,5,6,7,8,9,2,3,4,5 };
//	int sum = 0;
//	string yes = "유효 번호";
//	string no = "무효 번호";
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
	cout << "주민 번호 입력: ";
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
	m = (11-(sum % 11) )% 10;//이게틀렸나?
	//위에 sum은 괜찮은 것 같은데 
	//뭐지
	//뭐지???
	cout << "태어난 년도: " << bornY << endl;
	Gender(num);
	cout << "나이:" << 2022 - bornY + 1<<endl;
	if (m == (num[12] - '0')) {
		cout << "유효한 번호입니다." << endl;
	}
	else {
		cout << num[12]<<endl<<m << "무효";
	}
}