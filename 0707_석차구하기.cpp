#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n, min;
	min = 100;
	vector<int> score;
	vector<int> copyScore;
	vector<int> rank;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		score.push_back(a);
		if (min >= a) { min = a; }
	}
	copyScore = score;
	sort(copyScore.begin(), copyScore.end());
	for (int i = 0; i < n; i++)
	{
		int a = upper_bound(copyScore.begin(), copyScore.end(), score[i]) - copyScore.begin();
		rank.push_back(n - a + 1);
	}
	for (int i = 0; i < n; i++)
	{
		cout << rank[i] << " ";
	}
}