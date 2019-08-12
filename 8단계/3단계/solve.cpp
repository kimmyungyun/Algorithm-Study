#include <iostream>
using namespace std;

int main()
{
	long N;
	cin>>N;
	long num;
	if(N == 1){
		num = 1;
		cout<<num;
		return 0;
	}
	long i=1;
	long right, left;
	while(true)
	{
		right = (i * (i+1) * 3 + 1);
		left = ((i-1) * i * 3 + 2);
		if(right >= N && left <= N)
			break;
		else
			i++;
	}
	cout<<i+1;
	return 0;
}