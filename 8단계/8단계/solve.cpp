#include <iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	int k,n;
	int apt[15][15]={0};
	for(int i=0;i<15; i++)
	{
		for(int j=0; j<15; j++)
		{
			if(i == 0)
			{
				apt[i][j] = j+1;
			}
			else{
				if(j == 0)
				{
					apt[i][j] = apt[i-1][j]; 
				}
				else{
					apt[i][j] = apt[i-1][j]+apt[i][j-1];
				}
			}
		}
	}

	for(int test_case = 1; test_case<=T; test_case++)
	{
		cin>>k>>n;
		cout<<apt[k][n-1]<<'\n';

	}
	return 0;
}