#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	stack<string> stk;
	string arr[3]; //이거 안 쓰고 하는 방법 없나?
	//2,3단계는 가능할 거 같은데 1단계는 아ㄴ되지 않나 흠 


	// 1단계, 2단계
	/*
	//1,2 단계 기본
	for (int i = 0; i < 3; i++) {
		string a;
		cin >> a;
		reverse(a.begin(), a.end());
		stk.push(a);
		arr[i]= stk.top();
		stk.pop();
	}

	//1단계 출력
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << endl;
	}
	//2단계 출력
	for (int i = 2; i>=0; i--) {
		cout << arr[i] << endl;
	}
	*/

	//2단계 ver.2
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


	//3단계 
	for (int i = 0; i < 3; i++) {
		string a;
		cin >> a;
		//1단계 기본에서 if문만 추가해서 홀수/짝수 체크해서 뒤집을지 안 뒤집을지 결정
		//나머지는 2단계와 동일 
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