#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> n;
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int temp;
		cin >> temp;
		n.push_back(temp);
	}
	sort(n.begin(), n.end());
	for (int z = 0; z < k; z++)
	{
		cout << n[z]<< endl;
	}

}
