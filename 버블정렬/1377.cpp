#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<pair<int,int>> a(n); // 인덱스를 저장 하고 싶어서

	for (int i = 0; i < n; i++)
	{
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a.begin(), a.end());


	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < a[i].second - i)
			max = a[i].second - i;
	}
	cout << max + 1;
	 

}
