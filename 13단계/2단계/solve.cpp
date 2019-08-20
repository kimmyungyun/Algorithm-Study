#include <iostream>
#include <cstring>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool comp(pair<long, long> a, pair<long, long> b)
{
	if(a.second < b.second)
	{
		return true;
	}
	else if(a.second == b.second)
	{
		if(a.first < b.first)
			return true;
		return false;
	}
	return false;
}
int main()
{
	int N;
	cin>>N;
	int start, end;
	vector<pair<long, long> > table;
	for(int i=0; i<N; i++)
	{
		cin>>start>>end;
		table.push_back({start, end});
	}
	sort(table.begin(), table.end(), comp);
	pair<long, long> time = table[0];
	int cnt = 1;
	for(int i=1; i<N; i++)
	{
		if(time.second <= table[i].first)
		{
			time = table[i];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}