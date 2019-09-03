#include <iostream>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int num = 0;
	while(N>0)
	{
		if(N%5 == 0){
			N -= 5;
			num++;
		}
		else{
			if(N%3 == 0)
			{
				N -= 3;
				num++;
			}
			else if(N-5 >= 0)
			{
				N -= 5;
				num++;
			}
			else{
				if(N-3>=0)
				{
					N -= 3;
					num++;
				}
				else{
					num = -1;
					break;
				}
			}
		}
	}
	cout<<num;
	return 0;
}