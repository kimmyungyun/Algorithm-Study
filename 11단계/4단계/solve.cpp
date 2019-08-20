#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

unsigned int num[8001]={0};
vector<int> a;
int main()
{
	int N, tmp;
	scanf("%d", &N);
	float average = 0;
	int min = 100000;
	int max = -10000;

	for(int i=0; i<N; i++)
	{
		cin>>tmp;
		average += tmp;	//산술평균을 구하기 위한 값
		num[tmp+4000]++;
		a.push_back(tmp);
		if(min > tmp)
			min = tmp;
		if(max < tmp)
			max = tmp;
	}

	printf("%d\n", average/N<0?int(average/N-0.5):int(average/N+0.5));
	sort(a.begin(), a.end());
	printf("%d\n", a[int(N/2)]);
	vector<int> check;
	
	int cnt = 0;
	
	for(int i=0; i<=8000; i++)
	{
		if(num[i]>cnt)	//가장 많이 나타나는 값이라면
		{
			cnt = num[i];
			check.clear();
			check.push_back(i);
		}
		else if(num[i] == cnt)
		{
			check.push_back(i);
		}
	}

	if(check.size() > 1)
		printf("%d\n", check[1]-4000);
	else if(check.size() == 1)
		printf("%d\n", check[0]-4000);

	printf("%d", max-min);

	return 0;
}