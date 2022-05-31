#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main() {
	while (true)
	{
		vector<char> cStk;
		vector<int> iStk;
		int n, input, temp = 0;
		cin >> n;
		//cout << "n:" << n << endl;
		bool check = true;
		for (int i = 0; i < n; i++)
		{
			cin >> input;
			//cout << "input, i:" << input << " " << i << endl;
			if (iStk.empty() || iStk.back() > input) {
				iStk.push_back(input);
				cStk.push_back('P');
			}

			while (iStk.back() < input&& input == (temp + 1))
			{
				temp = input;
				iStk.pop_back();
				cStk.push_back('O');
			}
		}
		if (!iStk.empty()) {
			check = false;
		}
		if (check == false) {
			while (!cStk.empty())
			{
				cout << cStk.back();
				cStk.pop_back();
			}
			cout << "impossible" << endl;
			continue;
		}
		else
		{
			cout << "cStk" << endl;
			reverse(cStk.begin(), cStk.end());
			while (!cStk.empty())
			{
				cout << cStk.back();
				cStk.pop_back();
			}
		}
	}
}