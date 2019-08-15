#include <iostream>
#include <cstring>
using namespace std;
bool num[1001] = {true};
void check()
{
	num[0] = false;
	num[1] = false;
	for(int i=2; i<1001; i++)
	{
		if(num[i] == true)
		{
			for(int j=i+i; j<1001; j = j+i)
			{
				num[j] = false;
			}
		}
	}
}
int main()
{
	memset(num, true, sizeof(num));
	check();
	int N, a;
	cin>>N;
	int cnt = 0;

	for(int i=0; i<N; i++)
	{
		cin>>a;
		if(num[a])
			cnt++;
	}
	cout<<cnt;
	return 0;
}