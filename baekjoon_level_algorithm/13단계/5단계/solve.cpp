#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main()
{
	string X;
	cin>>X;
	int tmp = 0;
	int result = 0;
	bool flag = false;	//-가 나오기 전까지 확인하는 플래그
	for(int i=0; i<X.size(); i++)
	{
		if(X[i] >='0' && X[i]<='9')	//정수 확인
		{
			tmp = tmp*10 + X[i]-'0';
		}
		else if(X[i] == '-')
		{
			if(!flag)	//-가 나오지 않았더라면
				result += tmp;
			else	//-가 나왔다면
				result -= tmp;
			flag = true;
			tmp = 0;	//이전 정수들 초기화
		}
		else if(X[i] == '+')
		{
			if(!flag)	//-가 나오지 않았더라면
				result += tmp;
			else	//-가 나왔다면
				result -= tmp;
			tmp = 0;	//이전 정수들 초기화
		}

	}
	if(flag)
		result -= tmp;
	else
		result += tmp;
	cout<<result;
	return 0;
}