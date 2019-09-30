#include <iostream>
#include <cstring>
#include <vector>
#include <utility>
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
	sort(arr.begin(), arr.end());	//오름차순 정렬
	int sum = 0;	//결과값
	int before = 0;	//이전까지 사람들이 인출하는데 걸린 시간
	for(int i=0; i<N; i++)
	{
		sum += (before + arr[i]);
		before += arr[i];
	}
	cout<<sum;
	return 0;
}