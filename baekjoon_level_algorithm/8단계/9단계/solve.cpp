#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	while(b != 0)
	{
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}
long lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}
int main()
{
	int T;
	cin>>T;
	int M, N, x, y;
	
	for(int test_case = 1; test_case<=T; test_case++)
	{
		cin>>M>>N>>x>>y;
		long X = x;
		long long max = lcm(M, N);
		while(true)
		{
			if((X % N) == 0)
			{
				if(y == N  || X > max)
					break;
				else
					X+= M;
			}
			else if((X % N) == y || X > max)
				break;
			else{
				X += M;
			}

		}
		if(X> max)
			X = -1;
		cout<<X<<'\n';
	}
	return 0;
}