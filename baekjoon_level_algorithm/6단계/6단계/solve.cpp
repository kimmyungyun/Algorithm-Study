#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int hanoi(int x, int from, int to, int a)
{
	if(x == 1){
		printf("%d %d\n",from, to);
		return 0;
	}

	hanoi(x-1, from, a, to);
	printf("%d %d\n", from, to);
	hanoi(x-1, a, to, from);
	return 0;
}
int main()
{
	int N;
	scanf("%d", &N);
	printf("%d\n", int(pow(2, N)-1) );
	hanoi(N, 1, 3, 2);
	return 0;
}