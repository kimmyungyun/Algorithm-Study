#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin>>a;
	int dst = a;
	cnt = 0;
	b = (a/10)+(a%10);
	a = (a%10)*10 + (b%10);
	cnt++;
	while(a != dst)
	{
		b = (a/10)+(a%10);
		a = (a%10)*10 + (b%10);
		cnt++;
	}
	cout<<cnt;
    return 0;
}