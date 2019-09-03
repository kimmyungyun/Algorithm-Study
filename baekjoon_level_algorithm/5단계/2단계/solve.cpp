#include <iostream>
using namespace std;
int main()
{
	int max = 0;
	int idx = -1;
	int tmp;
	for(int i=0; i<9; i++)
	{
		cin>>tmp;
		if(tmp>max)
		{
			max = tmp;
			idx = i+1;
		}
	}
	cout<<max<<'\n';
	cout<<idx;
	return 0;
}