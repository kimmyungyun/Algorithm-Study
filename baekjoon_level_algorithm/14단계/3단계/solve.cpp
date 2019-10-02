#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
bool primary[10000001];
void check(long N)	//소수 확인
{
	for (long i = 2; i<=N; i++)
	{
		if (primary[i])
		{
			for (long j = i + i; j<N; j = j + i)
			{
				primary[j] = false;
			}
		}
	}
}
int main()
{
	long N;
	cin >> N;
	memset(primary, true, 10000001);
	check(N);

	while (N != 1)
	{
		for (int i = 2; i <= N; i++)
		{
			if (primary[i] && N % i == 0)	//나누어 떨어지는 소수라면
			{
				cout << i << '\n';	//출력
				N /= i;
				break;
			}
		}
	}

}