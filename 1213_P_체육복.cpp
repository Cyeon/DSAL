#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	int arr[31] = { 0 };
	for (int n : reserve)
	{
		arr[n]++;
	}

	for (int i = 0; i < lost.size(); i++)
	{
		arr[lost[i]]--;
	}

	for (int i = 1; i <= n; i++)
	{
		if (arr[i - 1] > 0) {
			arr[i - 1]--;
			arr[i] ++;
		}
		else if (arr[i + 1] > 0) {
			arr[i + 1]--;
			arr[i]++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i + 1] >= 0) {
			answer++;
		}
	}
	return answer;
}

