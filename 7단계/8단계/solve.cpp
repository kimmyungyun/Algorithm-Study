#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int change(char x)
{
	if(x >= 'A' && x<='C')
	{
		return 3;
	}
	else if(x >= 'D' && x<='F')
	{
		return 4;
	}
	else if(x >= 'G' && x<='I')
	{
		return 5;
	}
	else if(x >= 'J' && x<='L'){
		return 6;
	}
	else if(x >= 'M' && x<='O'){
		return 7;
	}
	else if(x >= 'P' && x<='S')
	{
		return 8;
	}
	else if(x >= 'T' && x<='V'){
		return 9;
	}
	else if(x >= 'W' && x<='Z'){
		return 10;
	}
}
int main()
{
	string A;
	cin>>A;
	int sum = 0;
	for(int i=0; i<A.size(); i++)
	{
		sum += change(A[i]);
	}
	cout<<sum;
}