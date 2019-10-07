#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
	int tmp;
	if(a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	while(b != 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
int main()
{
	int N;
	cin>>N;
	vector<int> arr(100, 0);
	for(int i=0; i<N; i++)
		cin>>arr[i];

	sort(arr.begin(), arr.begin()+N);
	int x = arr[1]-arr[0];
	for(int i=2; i<N; i++)
	{
		x = gcd(x, arr[i]-arr[i-1]);
	}
	vector<int> result;
	int i;
	for(i=2; i*i<x; i++)
	{
		if(x%i == 0)
		{
			result.push_back(i);
			result.push_back(x/i);
		}
	}
	result.push_back(x);
	if(i*i == x)
	{
		result.push_back(i);
	}
	sort(result.begin(), result.end());
	for(i=0; i<result.size(); i++)
		cout<<result[i]<<" ";
}