#include <iostream>
using namespace std;
#define endl "\n"

int arr[1000000];
int sorted[1000000];
void merge(int left, int right) {
	int mid;
	int p1, p2, p3;

	if (left < right) {

		//�迭�� ������ �մϴ�
		mid = (left + right) / 2;
		merge(left, mid);
		merge(mid + 1, right);

		p1 = left;		// ���ĵ� ���� �迭�� ���� �ε���
		p2 = mid + 1;	// ���ĵ� ������ �迭�� ���� �ε���
		p3 = left;		// �պ��� ����Ʈ�� ���� �ε��� 

		//���� ���ĵ� �迭�� �պ�
		while (p1 <= mid && p2 <= right) {
			if (arr[p1] < arr[p2])sorted[p3++] = arr[p1++];
			else sorted[p3++] = arr[p2++];
		}

		//�����ִ� ���� �迭 �ϰ� ����
		while (p1 <= mid) sorted[p3++] = arr[p1++];

		//�����ִ� ������ �迭 �ϰ� ����
		while (p2 <= right) sorted[p3++] = arr[p2++];

		//�迭 sorted�� �迭 a�� �纹��
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