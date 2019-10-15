#include <iostream>
#include <cstring>
#include <vector>
using namespace std;


int main()
{
	int N;
	cin >> N;
	int x;
	vector<int> arr;
	while (N--)
	{
		cin >> x;
		if(x != 0)
			arr.push_back(x);
		else
		{
			arr.pop_back();
		}
	}
	int sum = 0;
	for(int i=0; i<arr.size(); i++)
	{
		sum += arr[i];
	}
	cout<<sum;
}