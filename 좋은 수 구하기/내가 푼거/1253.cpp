// 어려워 문제 이해도 제대로 못해서 답과 거리가 먼 코드 작성함
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int answer = n;
	vector<long long int> temp;
	for (int i = 0; i < n; i++)
	{
		long long int tempo;
		cin >> tempo;
		if (tempo == 1 || tempo == 2)
			answer--;
	}
	cout << answer;


}
