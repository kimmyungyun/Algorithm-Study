#include <iostream>
using namespace std;
int main()
{
	int mod[42] = {0,};
	int tmp;
	for(int i=0; i<10; i++)
	{
		cin>>tmp;
		mod[tmp%42]++;
	}
	int cnt = 0;
	for(int i=0; i<42; i++)
	{
		if(mod[i] != 0)
			cnt++;
	}
	cout<<cnt;
}