#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	int pos[3][2] = {0};
	for(int i=0; i<3; i++)
	{
		cin>>pos[i][0]>>pos[i][1];
	}
	bool flag = false;
	int q = 0;
	for(int i=1; i<3; i++)
	{
		if(pos[0][0] == pos[i][0])
		{
			flag = true;
		}
		else if(pos[0][0] != pos[i][0]){
			q = i;
		}
	}
	if(flag)
	{
		cout<<pos[q][0]<<" ";
	}
	else{
		cout<<pos[0][0]<<" ";
	}
	flag = false;
	for(int i=1; i<3; i++)
	{
		if(pos[0][1] == pos[i][1])
		{
			flag = true;
		}
		else if(pos[0][1] != pos[i][1]){
			q = i;
		}
	}
	if(flag)
	{
		cout<<pos[q][1];
	}
	else{
		cout<<pos[0][1];
	}


	return 0;
}