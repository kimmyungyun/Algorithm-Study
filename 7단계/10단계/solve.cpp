#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int T;
	cin>>T;
	int cnt = T;
	for(int test_case = 0; test_case<T; test_case++)
	{
		string X;
		cin>>X;
		vector<bool> flag(26, false);
		for(int i=0; i<X.size(); i++)
		{
			if(flag[X[i]-'a'] == false)	//한번도 만나지 않았다면
			{
				char q = X[i];
				flag[X[i]-'a'] = true;
				while(q == X[i])	//다를때까지 i를 증가시킨다
				{
					i++;
				}
				i--;	//for문 연산이 +1 되기 때문에 한번 줄여줘야 한다
			}
			else{
				
				cnt--;	//다른 것을 만났다면 그룹 단어가 아니기 때문에 감소
				break;
			}
		}
	}
	cout<<cnt;
}