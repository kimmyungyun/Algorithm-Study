#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int gcd(int a, int b)	
{
	int t;
	if(a<b)
	{
		t = a;
		a = b;
		b = t;
	}
	while(b != 0)
	{
		t = a%b;
		a = b;
		b = t;
	}
	return a;
}
int lcm(int a, int b)
{
	return (a*b)/gcd(a, b);
}
int main()
{
	int a, b;
	cin>>a>>b;
	cout<<gcd(a, b)<<'\n';
	cout<<lcm(a, b);
}