#include<iostream>
#include<vector>
using namespace std;
vector<int> vec;
//void BinarySearch(int min, int max);
void BinarySearch();
int main() {
	int min, max;
	cout << "������ �ּҰ�, �ִ밪 �Է�: ";
	cin >> min >> max;
	for (int i = min; i <= max; i++)
	{
		vec.push_back(i);
	}

	//BinarySearch(min, max);
	BinarySearch();
}

//void BinarySearch(int min, int max) {
//	int mid;
//	string str;
//	while (min <= max) {
//		mid = (max + min) / 2;
//		cout << mid << "�� �Դϱ�? :";
//		cin >> str;
//		if (str == "YES") {
//			cout << "������ϴ�." << endl;
//			return;
//		}
//		else if (str == "UP") {
//			min = mid+1;
//		}
//		else if (str == "DOWN") {
//			max = mid-1;
//		}
//	}
//	cout << "ERROR" << endl;
//}

void BinarySearch() {
	cout << "���̰� �´ٸ� YES, �� ���ٸ� UP, �� ���ٸ� DOWN�� �Է��ϼ���." << endl << endl;

	string answer;

	int left = 0;
	int right = vec.size()-1;
	while (right >= left)
	{
		int mid = (right + left) / 2;
		cout << "Searching range: " << vec[left] << "~" << vec[right] << endl;
		cout << vec[mid] << "�� �Դϱ�? : ";
		cin >> answer;
		if (answer == "YES") {
			cout << "WOW~!!" << endl;
			return;
		}
		else if (answer == "UP") {
			left = mid + 1;
		}
		else if (answer == "DOWN") {
			right = mid - 1;
		}
	}
	cout << "������ ���� �Ф�"<<endl;
}
