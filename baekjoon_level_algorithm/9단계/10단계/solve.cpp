#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int T;
	cin>>T;
	int x1, y1, r1, x2, y2, r2;
	int result;
	for(int test_case = 0; test_case<T; test_case++)
	{
		cin>>x1>>y1>>r1>>x2>>y2>>r2;
		double dist = pow(x1-x2, 2) + pow(y1-y2, 2);
		double r1_r2 = pow(r1+r2, 2);
		double r1__r2 = pow(r1-r2, 2);
		if(dist == 0)	//두 사람의 위치가 같은 장소라면
		{
			if(r1 == r2)
			{
				result = -1;
			}
			else{
				result = 0;
			}
		}
		else{
			if(dist == r1_r2 || dist == r1__r2)	//두 원이 한점에서 만난다
			{
				result = 1;
			}
			else if(dist< r1_r2 && dist > r1__r2)	//두원이 두점에서 만난다
			{
				result = 2;
			}
			else if(dist > r1_r2 || dist < r1__r2)	//두원이 만나지 못한다
			{
				result = 0;
			}
		}
		cout<<result<<'\n';
	}
	return 0;
}