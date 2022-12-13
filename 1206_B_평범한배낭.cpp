//#include<iostream>
//#define endl "\n"
//using namespace std;
//int DP[101][100001];
//int w[101], v[101];
//int main() {
//	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//
//	int n, k;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> w[i + 1] >> v[i + 1];
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= k; j++)
//		{
//			if (w[i] > k) {
//				DP[i][j] = DP[i - 1][j];
//			}
//			else
//			{
//				DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - w[i]] + v[i]);
//			}
//		}
//	}
//	cout << DP[n][k];
//}
//
//// Input
//// 4 7
//// 6 13
//// 4 8
//// 3 6
//// 5 12
////
//// My Output
//// 25
//// 
//// Answer
//// 14