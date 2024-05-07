#include<iostream>
#include<vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> A(n+1,0);
	bool changed = false;
	for (int i = 1; i <= n; i++)
	{
		int k;
		cin >> k;
		A[i]=k;
	}
	for (int i = 0; i <= n + 1; i++)
	{
		changed = false;
		for (int j = 1; j < n - i; j++)
		{
			if (A[j] > A[j + 1])
			{
				changed = true;
				swap(A[j], A[j + 1]);

			}
		}
		if (changed == false)
		{
			cout << i+1 << '\n';
			break;
		}
	}
}
