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
	int T;
	cin>>T;
	int n;
	int a, b;
	int min = 100000;
	for(int test_case = 0; test_case<T; test_case++)
	{
		cin>>n;
		for(int i=2; i<=n/2; i++)
		{
			if(num[i])
			{
				if(num[n-i])
				{
					if(abs(a-b)<min){
						min = abs(a-b);
						a = i;
						b = n-i;
					}
				}
			}
		}
		cout<<a<<" "<<b<<'\n';
	}
	
	return 0;
}