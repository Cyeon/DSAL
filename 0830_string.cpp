#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	queue<char> que;
	string str;
	getline(cin, str);

	//queue 사용 
	for (int i = 0; i < str.size(); i++)
	{
		que.push(str[i]);
	}

	char a = que.front();
	que.push(a);
	que.pop();

	for (int i = 0; i < str.size(); i++)
	{
		for (int j = 0; j < str.size(); j++) {
			cout << que.front();
			char a = que.front();
			que.push(a);
			que.pop();
		}
		cout << endl;
		char a = que.front();
		que.push(a);
		que.pop();
	}

	//substr 사용 (기현 코드)
	/*for (int i = 1; i < str.size() + 1; i++)
	{
		cout << str.substr(i) + str.substr(0, i) << endl;
	}*/
}