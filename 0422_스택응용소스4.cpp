#include <iostream>
#include <string>
#include <stack>
using namespace std;
//int main() {
//	string str;
//	stack<char> stk;
//	bool check = false;
//	cin >> str;
//	for (int i = 0; i < str.size(); i++) {
//		if (str[i] >= '0') {
//			if (check == true) {
//				while (!stk.empty()) {
//					cout << stk.top();
//					stk.top();
//				}
//				check = false;
//			}
//			cout << str[i];
//		}
//		else
//		{
//			if (stk.empty()) {
//				stk.push(str[i]);
//				check = true;
//			}
//			else if ((str[i] == '*' || str[i] == '/')&&stk.top()==str[i]) {
//				if (!stk.empty()) {
//					cout << stk.top();
//					stk.pop();
//				}
//				stk.push(str[i]);
//				check = true;
//			}
//		//	else if()
//		}
//	}
//}

int prec(char op);
string inToPost(string a);

int main() {
    while (true) {
        string a;
        cout << "중위표기 수식 : ";
        cin >> a;
        cout << "후위표기 수식 : " << inToPost(a) << endl;
    }
}
int prec(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    else if (op == '*' || op == '/') {
        return 0;
    }
}