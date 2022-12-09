//#include <iostream>
//#define endl "\n"
//using namespace std;
//int DP[100001] = { 0 };
//int main() {
//	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	int n;
//	cin >> n;
//	for (int i = 2; i <= n; i++)
//	{
//		DP[i] = 1 + DP[i - 1];
//
//		if (i % 3 == 0) {
//			DP[i] = 1 + DP[i / 3];
//		}
//		if (i % 2 == 0) {
//			DP[i] = 1 + DP[i / 2];
//		}
//	}
//	cout << DP[n];
//}