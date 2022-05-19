// push와 pop 함수를 구현하시오 
#include <iostream>
using namespace std;

typedef struct NODE {
	NODE* next;
	int data;
} NODE;

void Push(int _data);
int Pop();
bool isEmpty();
void printData();
void Menu();
NODE* s_top;

int main() {
	int data, nKey = 0;
	while (true) {
		Menu();
		cin >> nKey;
		cout << "\n";
		switch (nKey) {
		case 1:
			cout << "Push : ";
			cin >> data;
			Push(data);
			break;
		case 2:
			cout << "Pop : " << Pop() << endl;
			break;
		case 3:
			printData();
			break;
		default:
			cout << "입력 오류" << endl;
			break;
		}
		cout << "\n";
	}
	return 0;
}

void Push(int _data) {
	NODE* newNode = new NODE;
	newNode->next = NULL;
	newNode->data = _data;
	if (isEmpty()) {
		s_top = newNode;
	}
	else
	{
		newNode->next = s_top;
		s_top = newNode;
	}
	// 스택이 비어 있을 때와 아닐 떄를 고려하자
}

int Pop() {
	if (isEmpty()) { return -1; }
	NODE* temp = new NODE;
	temp = s_top;
	int data = temp->data;
	s_top = temp->next;
	delete(temp);
	return data;
	// 스택 맨 위에 있는 노드를 삭제하고 노드의 데이터 값을 반환하자 
}

void printData() {
	if (isEmpty()) {
		cout << "Stack is Empty" << endl;
		return;
	}
	NODE* top = s_top;
	for (; top != NULL; top = top->next) {
		cout << "| " << top->data << " |" << endl;
	}
	cout << "-----" << endl;
}

bool isEmpty() { return s_top == NULL; }

void Menu()
{
	cout << "1. Push" << endl;
	cout << "2. Pop" << endl;
	cout << "3. Show Stack" << endl;
	cout << "INPUT : ";
}