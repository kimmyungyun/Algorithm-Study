#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
	if(a.first < b.first)
	{
		return true;
	}
	else if(a.first == b.first)
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
	vector<pair<int, int> > pos;
	int x, y;
	for(int i=0; i<N; i++)
	{
		cin>>x>>y;
		pos.push_back({x, y});
	}
	sort(pos.begin(), pos.end(), comp);
	for(int i=0; i<N; i++)
	{
		printf("%d %d\n", pos[i].first, pos[i].second);
	}
}