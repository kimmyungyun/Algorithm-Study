#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string x;
	for(int i=0; i<t; i++)
	{
		cin>>x;
		int s = 0;
		int score = 0;
		for(int j=0; j<x.size(); j++)
		{
			if(x[j] == 'O')
				s++;
			else
				s = 0;
			score += s;

		}
		cout<<score<<'\n';
	}
}