#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	map<string, int> map; // 이름, 들어온 사람 수

	for (int i = 0; i < completion.size(); i++)
	{
		map[completion[i]] += 1;
	}

	for (int i = 0; i < participant.size(); i++)
	{
		if (map[participant[i]] > 0) {
			map[participant[i]] -= 1;
		}
		else
		{
			answer = participant[i];
			break;
		}
	}
	return answer;
}