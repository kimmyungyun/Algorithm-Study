#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int N;
int check()
{
	int cnt = 0;
	double tmp = 666;
	string x;
	while(true)
	{
		if(cnt == N)
		{
			break;
		}
		else{
			x = to_string(tmp);
			if(x.find("666") != string::npos)
			{
				cnt++;
			}
			tmp++;
		}
	}
	return tmp-1;
}
int main()
{

	cin>>N;
	cout<<check();
	return 0;
}