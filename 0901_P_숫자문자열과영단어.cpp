#include <string>
#include <vector>
#include <regex>
using namespace std;

string arr[] = { "zero","one","two","three","four","five","six","seven","eight","nine" };

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
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