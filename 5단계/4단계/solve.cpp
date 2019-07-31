#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	int cnt[10] = {0,};
	int sum = a * b * c;
	while(sum != 0)
	{
		cnt[sum % 10]++;
		sum /= 10; 
	}
	for(int i=0; i<10; i++)
		cout<<cnt[i]<<'\n';
	return 0;
}