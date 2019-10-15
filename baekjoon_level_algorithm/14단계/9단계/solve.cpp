#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main()
{
	int N;
	cin>>N;
	
	for(int i=0; i<N; i++)
	{
		map<string, int> arr;
		int M;
		cin>>M;
		int ans = 1;
		for(int j=0; j<M; j++)
		{
			string a, b;
			cin>>a>>b;

			if(arr.find(b) == arr.end())	//이전에 갯수를 센 의상이 없다면
			{
				arr.insert({b, 1});
			}
			else{	//이전에 갯수를 센 의상이 있다면
				auto it = arr.find(b);

				int x = it->second;	//이전까지 갯수를 센 의상의 갯수
				arr.erase(it);	//map 내부에서 수정할 수 없기 때문에 제거
				arr.insert({b, x+1});	//수정된 값을 삽입
			}
		}
		for(auto it = arr.begin(); it != arr.end(); it++)	//경우의 수를 계산하는 것
		{
			ans = ans * (it->second + 1);
		}
		cout<<ans-1<<'\n';
	}

}