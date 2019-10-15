#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	long long N, R;
	cin>>N>>R;


	long long cnt1 = 0, cnt2 = 0;
	for(long long i=5; i<=N; i=i*5)
	{
		cnt1 += N/i;
	}
	for(long long i=2; i<=N; i=i*2)
	{
		cnt2 += N/i;
	}

	for(long long i=5; i<=R; i=i*5)
	{
		cnt1 -= R/i;
	}
	for(long long i=5; i<=(N-R); i=i*5)
	{
		cnt1 -= (N-R)/i;
	}

	for(long long i=2; i<=R; i=i*2)
	{
		cnt2 -= R/i;
	}
	for(long long i=2; i<=(N-R); i=i*2)
	{
		cnt2 -= (N-R)/i;
	}
	//cout<<cnt1<<" "<<cnt2<<'\n';

	if(cnt1 > cnt2)
		cout<<cnt2;
	else
		cout<<cnt1;
}