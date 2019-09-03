#include <iostream>
#include <cstring>
using namespace std;

int card[100];
int main()
{
	int N, M;
	cin>>N>>M;
	int x;
	for(int i=0; i<N; i++)
	{
		cin>>card[i];
	}
	int max = 0;
	for(int i=0; i<N; i++)
	{
		for(int j=i+1; j<N; j++)
		{
			for(int k=j+1; k<N; k++)
			{
				int m = card[i]+card[j]+card[k];
				if(m <= M)
				{
					if(m>max)
						max = m;
				}
			}
		}
	}
	cout<<max;
	return 0;
}