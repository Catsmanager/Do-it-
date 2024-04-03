#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int answer = 0;
int main()
{
	int n, m;
	cin >> n >> m;//n은 수열의 갯수 m은 수열의 합
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int start = 0;
	int end = 0;
	int sum = arr[0];
	while (end < n)
	{
		if (sum < m)
		{
			end++;
			if (end < n)
				sum += arr[end];
		}
		else if (sum > m)
		{
			sum -= arr[start];
			start++;
		}
		else if (sum == m)
		{
			sum -= arr[start];
			start++;
			end++;
			if (end < n)
				sum += arr[end];
			answer++;

		}
	}
	cout << answer;
}
