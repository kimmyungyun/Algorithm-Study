#include <iostream>
#include <vector>
using namespace std;
bool check(int x)
{
	int cha1 = 0;	//이전 차
	int cha2 = 0;	//현재 차
	cha2 = ((x/10)%10) - (x%10);	//일의 자리와 십의자리 차를 구하는 부분
	cha1 = cha2;
	x /= 10;
	
	while((x/10) != 0)	//앞의 자리수가 비어있지 않을 때 
	{
		
		cha2 = ((x/10)%10) - (x%10);	//10으로 앞에서 나눴으므로 다음 자리의 수의 차이다
		if(cha1 != cha2)	//둘이 다르다면 자리수가 등차수열이 아니다
			return false;

		cha1 = cha2;
		x /= 10;
	}
	return true;
}
int main()
{
	bool flag[1001]={true,};
	int N;
	cin>>N;
	for(int i=1; i<10; i++)	//일의 자리 수는 무조건 등차수열이다
		flag[i] = true;
	for(int i=10; i<N; i++)	//10의자리 부터는 등차수열이 아닐 수도 있으므로 아닌 것으로 초기화
		flag[i] = false;

	int cnt = 0;

	for(int i=10; i<=N; i++)	//한수 인지 아닌지 체크
	{
		flag[i] = check(i);
	}
	for(int i=1; i<=N; i++){
		if(flag[i]){
			cnt++;
		}
	}

	cout<<cnt;
	return 0;
}