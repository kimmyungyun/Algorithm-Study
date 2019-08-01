#include <iostream>
using namespace std;
int factorial(int x)
{
	int sum = 1;
	for(int i=2; i<=x; i++)
		sum *= i;
	return sum;
}
int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", factorial(N));
	return 0;
}