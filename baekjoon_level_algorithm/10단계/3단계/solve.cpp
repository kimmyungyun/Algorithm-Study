#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int N;
	int weight[51];
	int height[51];
	int cnt[51]={0};
	cin>>N;
	for(int i=0; i<N; i++)
	{
		cin>>weight[i]>>height[i];
	}
	int tmp_w, tmp_h;
	for(int i=0; i<N; i++)
	{
		tmp_w = weight[i];
		tmp_h = height[i];
		int tmp_c = 0;
		for(int j=0; j<N; j++)
		{
			if(i == j)
				continue;
			if(tmp_w<weight[j] && tmp_h<height[j])
			{
				tmp_c++;
			}
		}
		cnt[i] = tmp_c+1;
	}
	for(int i=0; i<N; i++)
		cout<<cnt[i]<<" ";
	return 0;
}