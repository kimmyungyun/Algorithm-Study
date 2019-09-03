#include <iostream>
using namespace std;

int main()
{
	long long A, B, C;
	cin>>A>>B>>C;

	if(B>=C){	//제작비용이 더 사용된다면 손익분기점이 존재할 수 없다
		cout<<"-1";
		return 0;
	}
	long long i=(A/(C-B))+1;

	cout<<i;
	return 0;
}