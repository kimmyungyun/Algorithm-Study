#include <iostream>
#include <cstring>
using namespace std;

int num[1001];
int main()
{
	int N;
	cin>>N;
	for(int i=0; i<N; i++)
	{
		cin>>num[i];
	}
	int tmp;								
	for(int i=0; i<N-1; i++)
	{
		for(int j=0; j<N-i-1; j++)
		{
			if(num[j]>num[j+1])
			{
				tmp = num[j];
				num[j] = num[j+1];
				num[j+1] = tmp;
			}
		}
	}

	for(int i=0; i<N; i++)
	{
		cout<<num[i]<<'\n';
	}
	return 0;
}