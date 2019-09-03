#include <iostream>
#include <cstring>
using namespace std;
int N, M;
char chess[51][51];
int check(int start_x, int start_y)
{
	int ans;
	bool start_flag = true;
	bool flag1 = true;	//flag 가 true면은 B
	//flag 가 false면은 W
	int cnt1 = 0;
	for(int i=start_x; i<start_x+8; i++)
	{
		for(int j=start_y; j<start_y+8; j++)
		{
			if(flag1){
				if(chess[i][j] == 'W'){
					cnt1++;
				}
			}
			else{
				if(chess[i][j] == 'B'){
					cnt1++;
				}
			}
			flag1 = !flag1;
		}
		start_flag = !start_flag;
		flag1 = start_flag;
	}
	start_flag = false;
	bool flag2 = false;
	int cnt2 = 0;
	for(int i=start_x; i<start_x+8; i++)
	{
		for(int j=start_y; j<start_y+8; j++)
		{
			if(flag2){
				if(chess[i][j] == 'W'){
					cnt2++;
				}
			}
			else{
				if(chess[i][j] == 'B'){
					cnt2++;
				}
			}
			flag2 = !flag2;
		}
		start_flag = !start_flag;
		flag2 = start_flag;
	}
	
	return min(cnt1, cnt2);
}
int main()
{

	cin>>N>>M;
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<M; j++)
			cin>>chess[i][j];
	}
	int ans = 100000;
	int tmp;
	for(int i=0; i<=N-8; i++)
	{
		for(int j=0; j<=M-8; j++)
		{
			tmp = check(i, j);
			ans = min(tmp, ans);
		}
	}
	cout<<ans;
	return 0;
}