#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;
vector<long long int> vec(101, -1);

long long int Padovan(int n) {
	if (vec[n] == -1) {
		vec[n] = Padovan(n - 1) + Padovan(n - 5);
	}
	return vec[n];
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	vec[1] = vec[2] = vec[3] = 1;
	vec[4] = vec[5] = 2;

	int t; cin >> t;

	for (int test = 0; test < t; test++)
	{
		int n;
		cin >> n;
		cout << Padovan(n) << endl;
	}
}