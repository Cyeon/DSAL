#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	stack<string> stk;
	string arr[3]; //�̰� �� ���� �ϴ� ��� ����?
	//2,3�ܰ�� ������ �� ������ 1�ܰ�� �Ƥ����� �ʳ� �� 


	// 1�ܰ�, 2�ܰ�
	/*
	//1,2 �ܰ� �⺻
	for (int i = 0; i < 3; i++) {
		string a;
		cin >> a;
		reverse(a.begin(), a.end());
		stk.push(a);
		arr[i]= stk.top();
		stk.pop();
	}

	//1�ܰ� ���
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << endl;
	}
	//2�ܰ� ���
	for (int i = 2; i>=0; i--) {
		cout << arr[i] << endl;
	}
	*/

	//2�ܰ� ver.2
	/*for (int i = 0; i < 3; i++) {
		string a;
		cin >> a;
		reverse(a.begin(), a.end());
		stk.push(a);
	}

	for (int i = 0; i < 3; i++) {
		arr[i] = stk.top();
		stk.pop();
		cout << arr[i] << endl;
	}*/


	//3�ܰ� 
	for (int i = 0; i < 3; i++) {
		string a;
		cin >> a;
		//1�ܰ� �⺻���� if���� �߰��ؼ� Ȧ��/¦�� üũ�ؼ� �������� �� �������� ����
		//�������� 2�ܰ�� ���� 
		if (a.length() % 2 == 1) {
			reverse(a.begin(), a.end());
		}
		stk.push(a);
		arr[i] = stk.top();
		stk.pop();
	}
	for (int i = 2; i >= 0; i--) {
		cout << arr[i] << endl;
	}
	

}