#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<int> n;
	int k;
	cin >> k;
	string temp;
	cin >> temp;
	int tempo = 0;
	for (char c : temp)
	{
		tempo += c - '0';
	}
	cout << tempo;
}
