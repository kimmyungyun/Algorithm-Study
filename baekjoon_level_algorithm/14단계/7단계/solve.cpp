#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int N, K;
	cin>>N>>K;
	vector<vector<int>> arr(1000, vector<int>(1000, 1));
	int sum = 1;
	
	for(int i=2; i<=N; i++)
	{
		for(int j=1; j<i; j++)
		{
			arr[i][j] = (arr[i-1][j-1] + arr[i-1][j])%10007;
		}
	}
	cout<<arr[N][K];
	
}