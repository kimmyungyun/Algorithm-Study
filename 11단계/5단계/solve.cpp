#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	string x;
	int word[10];
	cin>>x;
	for(int i=0; i<x.size(); i++)
	{
		word[i] = x[i]-'0';
	}
	sort(word, word+x.size(), greater<int>());
	for(int i=0; i<x.size(); i++)
		cout<<word[i];
	return 0;
}