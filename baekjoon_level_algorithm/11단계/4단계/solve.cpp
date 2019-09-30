#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


vector<int> a;
int main()
{
	vector<int> num(8001, 0);
	int N, tmp;
	cin>>N;
	int average = 0;
	int min_num = 4000;
	int max_num = -4000;
	int max_cnt = 0;
	for(int i=0; i<N; i++)
	{
		cin>>tmp;
		average += tmp;	//산술평균을 구하기 위한 값
		a.push_back(tmp);
		max_num = max(max_num, tmp);
		min_num = min(min_num, tmp);
	}
	
	
	sort(a.begin(), a.end());

	for(int i=0; i<N; i++)
	{
		num[a[i]+4000]++;
	}
	for(int i=0; i<8001; i++)
	{
		max_cnt= max(max_cnt, num[i]);
	}
	int cnt = 0;
	int idx = 0;
	for(int i=0; i<8001; i++)
	{
		if(num[i] == max_cnt)
		{
			cnt++;
			idx = i - 4000;
		}
		if(cnt == 2)
		{
			idx = i - 4000;
			break;
		}
	}
	cout<<round(average/(double)N)<<'\n';
	printf("%d\n", a[int(N/2)]);
	printf("%d\n", idx);
	printf("%d", max_num-min_num);

	return 0;
}