#include <iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int test_case = 1; test_case<=T; test_case++)
	{
		long x, y;
		cin>>x>>y;
		long i=1;
		long dist = y-x;	//이동해야할 거리
		long sum, min, max;
		while(true)
		{
			sum = i * i;
			min = sum - i+1;
			max = sum + i;
			if(dist>=min && max>=dist)
			{
				
				break;
			}
			i++;
		}
		if((i*i)>=dist)
				{
					cout<<2*i-1<<'\n';
				}
				else{
					cout<<2*i<<'\n';
				}

	}
	return 0;
}