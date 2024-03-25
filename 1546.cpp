#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<int> temp;
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int tempo;
		cin >> tempo;
		sum += tempo;
		temp.push_back(tempo);
	}
	sort(temp.begin(), temp.end(), greater<int>());
	int a = temp.at(0);
	auto answer = ((100.0 / a) / n) * sum;
	cout << answer;
}
