#include <string>
#include <vector>
#include <regex>
using namespace std;

string arr[] = { "zero","one","two","three","four","five","six","seven","eight","nine" };

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(string s) {
	int answer = 0;
	string result = s;

	for (int i = 0; i < 10; i++)
	{
		result = regex_replace(result, regex(arr[i]), to_string(i));
	}
	answer = stoi(result);
	return answer;
}