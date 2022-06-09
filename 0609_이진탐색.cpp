#include<iostream>
#include<vector>
using namespace std;
vector<int> vec;
//void BinarySearch(int min, int max);
void BinarySearch();
int main() {
	int min, max;
	cout << "나이의 최소값, 최대값 입력: ";
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
//		cout << mid << "살 입니까? :";
//		cin >> str;
//		if (str == "YES") {
//			cout << "맞췄습니다." << endl;
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
	cout << "나이가 맞다면 YES, 더 많다면 UP, 더 적다면 DOWN을 입력하세요." << endl << endl;

	string answer;

	int left = 0;
	int right = vec.size()-1;
	while (right >= left)
	{
		int mid = (right + left) / 2;
		cout << "Searching range: " << vec[left] << "~" << vec[right] << endl;
		cout << vec[mid] << "살 입니까? : ";
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
	cout << "속이지 마요 ㅠㅠ"<<endl;
}
