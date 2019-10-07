#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int N, K;
	cin>>N>>K;
	int sum = 1;
	for(int i=0; i<K; i++)
	{
		sum *= N;
		N--;
	}
	for(int k=2; k<=K; k++)
		sum /= k;

	cout<<sum;
	
}