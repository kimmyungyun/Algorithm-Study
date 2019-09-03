#include <iostream>
#include <cstring>
using namespace std;
int size = 250000;
bool num[250000] = {true};
void check()
{
	num[0] = false;
	num[1] = false;
	for(int i=2; i<size; i++)
	{
		if(num[i] == true)
		{
			for(int j=i+i; j<size; j = j+i)
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
	int N=1;
	
	int cnt = 0;
	while(true){
		cin>>N;
		cnt = 0;
		for(int i=N+1; i<=2*N; i++)
		{
			if(num[i]){
				cnt++;
			}

		}
		if(N == 0)
			break;
		cout<<cnt<<'\n';
	}
	
	return 0;
}