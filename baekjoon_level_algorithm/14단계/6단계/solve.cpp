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
		tmp = a%b;
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

	for(int i=1; i<N; i++)
	{
		cout<<arr[0]/gcd(arr[0], arr[i])<<'/'<<arr[i]/gcd(arr[0], arr[i])<<'\n';
	}
	
}