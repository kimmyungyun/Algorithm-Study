#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

unsigned int num[10001]={0};
int main()
{
	int N;
	scanf("%d", &N);
	int tmp;
	int max = 0;
	for(int i=0; i<N; i++)
	{
		scanf("%d", &tmp);
		if(max<tmp)
			max = tmp;
		num[tmp]++;
	}							

	for(int i=1; i<=max; i++)
	{
		if(num[i] != 0)
		{
			for(int j=0; j<num[i]; j++)
			{
				printf("%d\n", i);
			}
		}
	}
	return 0;
}