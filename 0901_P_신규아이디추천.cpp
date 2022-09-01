#include <string>
#include <vector>
#include <regex>
using namespace std;

string solution(string new_id) {
	string answer = "";
	answer = new_id;

	for (int i = 0; i < answer.size(); i++)
	{
		//소문자, 숫자일 경우 컨티뉴 
		if ((answer[i] >= 'a' && answer[i] <= 'z') || (answer[i] >= '0' && answer[i] <= '9')) { continue; }

		//대문자 -> 소문자 변환 
		if (answer[i] >= 'A' && answer[i] <= 'Z') {
			answer[i] = (char)(32 + answer[i]);
		}

		// 특수문자 -> 공백
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
	//공백 대체 
	answer = regex_replace(answer, regex(" "), "");
	


	return answer;
}