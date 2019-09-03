#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cnt[26] = {0,};
	string X;
	cin>>X;

	
	for(int i=0; i<X.size(); i++){	
		X[i] = toupper(X[i]);	//문자열 X를 모두 대문자로 바꾸는 작업
		cnt[X[i] - 'A']++;	//문자가 사용된 횟수 카운트
	}
	int max = 0;
	//가장 많이 사용된 횟수를 찾는 작업
	for(int i = 0; i<26; i++)
	{
		if(cnt[i] > max)
			max = cnt[i];
	}
	int num = 0;
	int idx;
	//개수가 최대인 것이 여러개인지 확인
	for(int i=0; i<26; i++)
	{
		if(max == cnt[i]){
			num++;
			idx = i;
		}
	}
	if(num > 1)	//여러개라면
		printf("?");
	else	//여러개가 아니라면
		printf("%c", 'A'+idx);
}