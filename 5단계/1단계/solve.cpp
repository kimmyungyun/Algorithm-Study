#include <iostream>
using namespace std;
int main()
{
	int max = -1000001;
	int min = 1000001;
	int t, num;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		cin>>num;
		if(num>max)
			max = num;
		if(num<min)
			min = num;

	}
	cout<<min<<" "<<max;
	return 0;
}