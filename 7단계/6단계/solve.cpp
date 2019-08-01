#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string x;
	getline(cin, x,'\n');
	int cnt = 0;
	bool flag = false;	//단어의 시작과 끝을 알려주는 플래기
	for(int i=0; i<x.size(); i++)
	{
		if(flag == false && ((x[i]>='a' && x[i]<='z') || (x[i]>='A' && x[i]<='Z')))	//공백이 나온 후 문자가 나오면
			flag = true;	//단어의 시작이다 라는 것을 알려준다
		if((x[i] ==' ' || i == x.size()-1) && flag == true){	//단어의 끝과 문자열 끝을 확인하는 부분
			cnt++;
			flag = false;
		}
	}
	cout<<cnt;

}