#include <iostream>
#include <vector>
using namespace std;
int check(int x)
{
	int a = x;
	while(x != 0)
	{
		a += (x%10);
		x /= 10;
	}
	return a;
}
int main()
{
	bool flag[10001]={true,};
	int idx;
	for(int i=1; i<10001; i++)
	{
		idx = check(i);
		if(idx<10001)
			flag[idx] = true; 
	}

	for(int i=1; i<10001; i++)
	{
		if(!flag[i])
			printf("%d\n", i);
	}
	return 0;
}