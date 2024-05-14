#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	priority_queue<int, vector<int>, greater<int>> num2;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		num2.push(num);
	}
	while (!num2.empty())
	{
		cout << num2.top() << '\n';
		num2.pop();
	}
}
