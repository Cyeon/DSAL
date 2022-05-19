#include<iostream>
#include<queue>
#include<time.h>
using namespace std;

#define ODER_TERM 15 // 고객의 주문 간격: 초 단위

#define CHEEZE     0        // 상수: 치즈마카롱
#define MILK      1        // 상수: 우유마카롱
#define CHOCO     2        // 상수: 초코마카롱

#define CHE_TERM    12       // 준비 시간(sec): 치즈
#define MILK_TERM    15       // 준비 시간(sec): 우유
#define CHOCO_TERM    24       // 준비 시간(sec): 초코

int main()
{
	int makeProc = 0; // 마카롱 제작 진행 상황
	int cheOrder = 0, milkOrder = 0, chocoOrder = 0;
	int sec;

	queue<int> q;

	srand(time(NULL));

	for (sec = 0; sec < 3600; sec++) // 1시간 동안 진행
	{
		if (sec % 15 == 0) // 15초 마다 주문을 받음
		{
			switch (rand() % 3) // 3 메뉴 중 랜덤을 주문됨
			{
			case CHEEZE:
				cheOrder++;
				q.push(CHE_TERM);
				break;

			case MILK:
				milkOrder++;
				q.push(MILK_TERM);
				break;

			case CHOCO:
				chocoOrder++;
				q.push(CHOCO_TERM);
				break;	
			}
		}

		if (makeProc<1&&!q.empty()) {  // 마카롱 하나를 다 만들었고 아직 대기가 있을 때
				// 대기줄에 맨 첫번째 사람을 빼냄
			makeProc = q.front();
			q.pop();
		}
		makeProc--;
	}

	//while (!q.empty())
	//{
	//	cout << q.front() << endl;
	//	q.pop();
	//}

	cout << "Simulation Report!!" << endl;
	cout << "[Order Count]" << endl;
	cout << "CHEEZE : " << cheOrder << endl;
	cout << "MILK : " << milkOrder << endl;
	cout << "CHOCO: " << chocoOrder << endl;
	cout << "※ Waiting room size: " << q.size() << endl;


	return 0;
}