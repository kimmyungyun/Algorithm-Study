#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


int main()
{
	int a, b, c;
	while(true)
	{
		cin>>a>>b>>c;
		if(a == 0 && b == 0 && c == 0)
			break;

		bool flag = false;
		if((a*a + b* b == c*c) || (a*a + c* c == b*b) || (c*c + b* b == a*a))
			flag = true;

		if(flag)
			cout<<"right"<<'\n';
		else
			cout<<"wrong"<<'\n';
	}

	return 0;
}