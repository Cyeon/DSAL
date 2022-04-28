#include <iostream>
using namespace std;
int idx = -1;

char Start(char name) {
	cin >> name;
	cout << "Constructing stack " << name << endl;
	idx = -1;
	return name;
}

void Pop(char arr[], char name) {
	if (idx == 0) {
		cout << "Stack " << name << " is empty" << endl;
		return;
	}
	cout << "Pop s1: " << arr[idx - 1] << endl;
	arr[idx - 1] = NULL;
	idx--;
}
void Push(char arr[], char name) {
	if (idx >= 10) {
		cout << "Stack " << name << " is full" << endl;
		return;
	}
	char a;
	cin >> a;
	arr[idx] = a;
	cout << "Push s1 " << arr[idx] << endl;
	idx++;
}

int main() {
	char s1[10] = { 'd','a','t','a','S','T','A','C','K' };
	char s1Name = 'A';
	s1Name=Start(s1Name);
	idx = strlen(s1);
	Pop(s1, s1Name);
	Pop(s1, s1Name);
	Pop(s1, s1Name);
	Pop(s1, s1Name);
	Pop(s1, s1Name);
	Pop(s1, s1Name);
	Pop(s1, s1Name);
	Pop(s1, s1Name);
	Pop(s1, s1Name);
	Pop(s1, s1Name);
	//Push(s1,s1Name);
	//Push(s1,s1Name);




}