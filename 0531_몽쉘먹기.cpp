#include <iostream>
#include<time.h>
#include<queue>
#include <algorithm>
using namespace std;
int main() {
	srand((unsigned int)time(NULL));
	while (true)
	{
		queue<int> que;
		int n, k;
		int cnt = 0;
		cin >> n >> k;

		for (int i = 0; i < n; i++)
		{
			que.push(i + 1);
		}
		while (que.size()!=1)
		{
			cnt++;
			if (cnt % k == 0) {
				que.pop();
			}
			else
			{
				que.push(que.front());
				que.pop();
			}

		}
		cout << que.front()<<endl;
	//	que.pop();
	}
}