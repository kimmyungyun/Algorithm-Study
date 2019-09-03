#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	int x,y,w,h;
	cin>>x>>y>>w>>h;
	int dis1 = 100000;
	int dis2 = 100000;

	if(w-x < x)
	{
		dis1 = w-x;
	}
	else{
		dis1 = x;
	}
	if(h-y < y){
		dis2 = h-y;
	}
	else{
		dis2 = y;
	}
	if(dis1>dis2)
	{
		cout<<dis2;
	}
	else{
		cout<<dis1;
	}
	return 0;
}