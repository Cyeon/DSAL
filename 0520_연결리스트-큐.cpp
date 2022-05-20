// ppt의 내용을 기반으로 해서 출력화면이랑 똑같이 나오게 교과서 코드를 고치자!!
// 일단 int s_count 변수 쓰지 말자!!
#include <iostream>
using namespace std;
typedef struct NODE
{
	NODE* next;
	int data;
};
void enQueue(int _data);
int deQueue();
void printData();
bool isEmpty();
void Menu();
NODE* s_front;
NODE* s_rear;
int s_count;
int main()
{
	int data, nKey = 0;
	while (true)
	{
		Menu();
		cin >> nKey;
		cout << "\n";
		switch (nKey)
		{
		case 1:
			cout << "Enqueue: ";
			cin >> data;
			enQueue(data);
			//cout << "log >> s_count : " << s_count << endl;
			break;
		case 2:
			cout << "Dequeue: " << deQueue() << endl;
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
void enQueue(int _data)
{
	NODE* temp = new NODE;
	temp->data = _data;
	temp->next = NULL;
	if (isEmpty()) {
		s_front = NULL;
		s_rear = NULL;
		s_front = temp;
		s_rear = temp;

	}
	else
	{
		s_rear->next = temp;
		s_rear = temp;
	}
	/*
	NODE* temp = new NODE;
	temp->next = NULL;
	temp->data = _data;
	if (isEmpty()) {
		s_front = temp;
		s_rear = temp;
	}
	else {
		temp->next = s_front;
		s_front = temp;
	}
	s_count++;*/
}
int deQueue()
{
	if (isEmpty()) {
		cout << "\nQueue is Empty\n\n";
		return -1;
	}
	NODE* temp = new NODE;
	int data = 0;
	temp = s_front;
	data = temp->data;
	if (s_front == s_rear) {
		s_front = NULL;
		s_rear = NULL;
	}
	else
	{
		s_front = temp->next;
	}
	delete(temp);
	return data;
	/*NODE* delTemp = s_rear;
	int rData = delTemp->data;
	NODE* front = s_front;
	for (int i = 0; i < s_count - 2; i++) {
		front = front->next;
	}
	front->next = NULL;
	s_rear = front;
	delete(delTemp);
	s_count--;
	return rData;*/
}

void printData()
{
	if (isEmpty())
	{
		cout << "\nQueue is Empty\n\n";
		return;
	}
	NODE* front = s_front;
	for (; front != NULL; front = front->next)
		cout << front->data <<"->";
	cout << NULL << endl;
}
bool isEmpty() {
	if (s_front == s_rear && s_front == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void Menu()
{
	cout << "1. Enqueue" << endl;
	cout << "2. Dequeue" << endl;
	cout << "3. Show Queue" << endl;
	cout << "INPUT : ";
}