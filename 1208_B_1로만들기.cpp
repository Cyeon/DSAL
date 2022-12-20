#include <iostream>
using namespace std;
int DP[1000001] = { 0 };
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        DP[i] = 1 + DP[i - 1];
        if (i % 3 == 0)
            DP[i] =min(DP[i], 1 + DP[i / 3]);
        if (i % 2 == 0)
            DP[i] =min(DP[i], 1 + DP[i / 2]);
    }
    cout << DP[n];
}