#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int N;
	cin>>N;
	if(N == 1){
		cout<<"0";
		return 0;
	}
	int n = 0, x;
	int ans = 0;
	for(int i=1; i<N; i++)
	{
		n = i;
		x = i;
		while(true)
		{
			if(x == 0)
				break;
			n += (x%10);
			x /= 10;
		}
		if(n == N){
			ans = i;
			break;
		}
	}
	cout<<ans;
	return 0;
}