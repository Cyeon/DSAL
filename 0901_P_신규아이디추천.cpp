#include <string>
#include <vector>
#include <regex>
using namespace std;

string solution(string new_id) {
	string answer = "";
	answer = new_id;

	for (int i = 0; i < answer.size(); i++)
	{
		//�ҹ���, ������ ��� ��Ƽ�� 
		if ((answer[i] >= 'a' && answer[i] <= 'z') || (answer[i] >= '0' && answer[i] <= '9')) { continue; }

		//�빮�� -> �ҹ��� ��ȯ 
		if (answer[i] >= 'A' && answer[i] <= 'Z') {
			answer[i] = (char)(32 + answer[i]);
		}

		// Ư������ -> ����
		switch (answer[i])
		{
		case '.':
		case '_':
		case '-':
			break;
		default:
			answer[i] = ' ';
			break;
		}
	}
	//���� ��ü 
	answer = regex_replace(answer, regex(" "), "");
	


	return answer;
}