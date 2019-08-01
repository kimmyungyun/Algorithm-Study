#include <iostream>
using namespace std;

int main()
{
	int N;
	cin>>N;
	char x;
	int sum = 0;
	for(int i=0; i<N; i++)
	{
		cin>>x;
		sum += (x - '0');
	}
	cout<<sum;
}