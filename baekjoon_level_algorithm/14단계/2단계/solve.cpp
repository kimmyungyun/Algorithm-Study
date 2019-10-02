#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int min_num = 1000000;
	int max_num = 1;
	int tmp;
	cin>>N;
	for(int i=0; i<N; i++)
	{
		cin>>tmp;
		max_num = max(max_num, tmp);	//가장 큰 값 찾기
		min_num = min(min_num, tmp);	//가장 작은 값 찾기
	}
	cout<<max_num*min_num;
}