#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> num;
int main()
{
	int N;
	cin>>N;
	int tmp;
	for(int i=0; i<N; i++)
	{
		cin>>tmp;
		num.push_back(tmp);
	}							

	sort(num.begin(), num.end());
	for(int i=0; i<N; i++)
	{
		cout<<num[i]<<'\n';
	}
	return 0;
}