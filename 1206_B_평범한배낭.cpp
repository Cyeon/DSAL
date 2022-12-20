#include <iostream>
using namespace std;
int DP[101][100001];
int w[101];
int v[101];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k; // n: 아이템 수, k: 배낭 용량
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        cin >> w[i] >> v[i];

    for (int i = 1; i <= n; i++) { // 아이템 1~n
        for (int j = 1; j <= k; j++) { // 배낭 용량 1~k
            // 아이템 i의 무게가 배낭 용량을 초과하면
            if (w[i] > j)
                DP[i][j] = DP[i - 1][j]; // 물건 i-1까지만 담았을 때 가치를 넣는다.
            else
                DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - w[i]] + v[i]);
            // 아이템 i를 담았을 때 가치와 물건 i를 담지 않을 때 가치 중 큰 값을 고른다.
        }
    }
    cout << DP[n][k];
    return 0;
} 