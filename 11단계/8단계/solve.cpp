#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool comp(string a, string b)
{
	if(a.size()< b.size())
	{
		return true;
	}
	else if(a.size() == b.size())
	{
		if(a<b)
			return true;
		else
			return false;
	}
	return false;
}
int main()
{
	int N;
	cin>>N;
	vector<string > words;
	string x;
	for(int i=0; i<N; i++)
	{
		cin>>x;
		words.push_back(x);
	}
	sort(words.begin(), words.end(), comp);
	string before = "";
	for(int i=0; i<N; i++){
		if(before != words[i]){
			cout<<words[i]<<'\n';
			before = words[i];
		}
	}
}