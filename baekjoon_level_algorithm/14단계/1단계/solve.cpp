#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int a, b;
	while(true)
	{
		cin>>a>>b;
        if(a == 0 && b == 0)	//a나 b가 0일 때 계산이 먼저 되지 않도록 조건문
			break;
		if(b%a == 0)	//첫번째 조건 확인
			cout<<"factor\n";
		else if(a % b == 0)	//두번째 조건 확인
			cout<<"multiple\n";
		else	//첫번째와 두번째에 부합안된다면 enither 출력
			cout<<"neither\n";
		
	}
}