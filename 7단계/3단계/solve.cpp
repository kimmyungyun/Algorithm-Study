#include <iostream>
using namespace std;

int main()
{
	int pos[26];
	string x;
	cin>>x;
	for(int i=0; i<26; i++)
		pos[i] = -1;
	for(int i=0; i<x.size(); i++)
	{
		if(pos[x[i]-'a'] == -1)	//이문자가 한번도 발견되지 않았다면
			pos[x[i]-'a'] = i;

	}
	for(int i=0; i<26; i++)
		cout<<pos[i]<<" ";
}