#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int coin[10];
	int N, K;
	cin>>N>>K;
	for(int i=0; i<N; i++)
	{
		cin>>coin[i];
	}
	int cnt = 0;
	int x;
	for(int i=N-1; i>=0; i--)
	{
		x = K/coin[i];
		K -= x * coin[i];
		cnt += x;
	}
	cout<<cnt;
	return 0;
}