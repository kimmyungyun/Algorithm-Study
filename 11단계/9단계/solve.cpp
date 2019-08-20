#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool comp(pair<pair<int, string>, int> a, pair<pair<int, string>, int> b)
{
	if(a.first.first < b.first.first)
	{
		return true;
	}
	else if(a.first.first == b.first.first)
	{
		if(a.second < b.second)
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
	vector<pair<pair<int, string>, int> > pos;
	int x;
	string y;
	for(int i=0; i<N; i++)
	{
		cin>>x>>y;
		pos.push_back({{x, y}, i});
	}
	sort(pos.begin(), pos.end(), comp);
	for(int i=0; i<N; i++)
	{
		cout<<pos[i].first.first<<" "<<pos[i].first.second<<'\n';
	}
}