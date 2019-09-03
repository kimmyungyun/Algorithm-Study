#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string A, B;
	cin>>A>>B;
	bool flag;	//어떤 수가 큰지 정하는 플래그
	for(int i=2; i>=0; i--)	//상근이의 방식에 따라 뒤에부터 확인
	{
		if(A[i]>B[i])
		{
			flag = true;
			break;
		}
		else if(A[i]<B[i])
		{
			flag = false;
			break;
		}
	}
	if(flag)
	{
		for(int i=2; i>=0; i--)
			cout<<A[i];
	}
	else{
		for(int i=2; i>=0; i--)
			cout<<B[i];
	}

}