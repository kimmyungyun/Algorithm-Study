#include <iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	int H, W, N;
	for(int test_case = 1; test_case<=T; test_case++)
	{
		cin>>H>>W>>N;
		int q = N/H;	//방호수
		int p = N%H;	//층호수
		if(p == 0){
			p = H;	//나누어 떨어지면 0호수가 되므로 H로 변환
			q--;	//나누어 떨어지면 방호수가 1이 되므로 밑에서 2로 변환된다 즉 1을 감소시켜준다
		}
		printf("%d%02d\n",p,q+1);

	}
	return 0;
}