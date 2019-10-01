#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int N;
	vector<int> arr;
	cin>>N;
	int tmp;
	for(int i=0; i<N; i++)
	{
		cin>>tmp;
		arr.push_back(tmp);
	}
	sort(arr.begin(), arr.end(), greater<int>());	//오름차순 정렬
	long long max_num = 0;
	for(int i=0; i<N; i++)
	{
		long long tmp = arr[i]*(i+1);
		if(max_num < tmp)
			max_num = tmp;
	}
	cout<<max_num;
	return 0;
}