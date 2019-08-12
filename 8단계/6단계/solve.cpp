#include <iostream>
using namespace std;

int main()
{
	long long int A, B, V;
	cin>>A>>B>>V;
	long long int day = 0;
	V = V - A;
	long long int X = V%(A-B);	//A-B는 실질적으로 이동한 거리

	if(X == 0)
	{
		day = ((long long int)V/(A-B))+1;
	}
	else{
		day = (long long int)(V/(A-B))+2;
	}
	cout<<day;
	return 0;
}