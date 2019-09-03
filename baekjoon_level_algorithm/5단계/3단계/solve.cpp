#include <iostream>
using namespace std;
int main()
{
	int ascending[8] = {1,2,3,4,5,6,7,8};
	int descending[8] = {8,7,6,5,4,3,2,1};
	int answer[8] = {0,};
	bool flag[2] = {true, true};
	for(int i=0; i<8; i++)
	{
		cin>>answer[i];
		if(answer[i] != ascending[i])
			flag[0] = false;

		if(answer[i] != descending[i])
			flag[1] = false;
	}

	if(flag[0])
		cout<<"ascending";
	else if(flag[1])
		cout<<"descending";
	else
		cout<<"mixed";

	return 0;
}