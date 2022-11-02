#include <iostream>
using namespace std;
#define endl "\n"

int arr[1000000];
int sorted[1000000];
void merge(int left, int right) {
	int mid;
	int p1, p2, p3;

	if (left < right) {

		//배열을 나눠서 합니다
		mid = (left + right) / 2;
		merge(left, mid);
		merge(mid + 1, right);

		p1 = left;		// 정렬된 왼쪽 배열에 대한 인덱스
		p2 = mid + 1;	// 정렬된 오른쪽 배열에 대한 인덱스
		p3 = left;		// 합병될 리스트에 대한 인덱스 

		//분할 정렬된 배열의 합병
		while (p1 <= mid && p2 <= right) {
			if (arr[p1] < arr[p2])sorted[p3++] = arr[p1++];
			else sorted[p3++] = arr[p2++];
		}

		//남아있는 왼쪽 배열 일괄 복사
		while (p1 <= mid) sorted[p3++] = arr[p1++];

		//남아있는 오른쪽 배열 일괄 복사
		while (p2 <= right) sorted[p3++] = arr[p2++];

		//배열 sorted를 배열 a로 재복사
		for (int i = left; i <= right; i++) {
			arr[i] = sorted[i];
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	merge(0, n - 1);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}