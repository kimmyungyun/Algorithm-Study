#include <iostream>
#include <cstring>
using namespace std;
int size = 10001;
bool num[10001] = {true};
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
	int N, M;
	cin>>N>>M;
	int sum = 0;
	int min = size;
	for(int i=N; i<=M; i++)
	{
		if(num[i]){
			sum+=i;
			if(min>i)
				min = i;
		}

	}
	if(sum == 0){
		sum = -1;
		cout<<sum;
	}
	else{
		cout<<sum<<'\n';
		cout<<min;
	}
	
	return 0;
}