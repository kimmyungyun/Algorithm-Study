#include <iostream>
using namespace std;

int main()
{
	long T;
	cin>>T;
	if(T == 1)
		cout<<"1/1"<<'\n';
	else{
		long x = 1;
		long deno = 1;
		bool flag = false;
		while(true)
		{
			if(x>=T)
				break;
			deno++;
			x += deno;
			flag = !flag;
		}
		if(flag)	//flag가 true면은 분자가 더 큰 것
		{
			cout<<deno-(x-T)<<"/"<<1+(x-T);
		}
		else{
			cout<<1+(x-T)<<"/"<<deno-(x-T);
		}

	}
	return 0;
}