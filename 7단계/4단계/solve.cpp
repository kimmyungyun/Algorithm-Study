#include <iostream>
using namespace std;

int main()
{
	int t, n;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		cin>>n;
		string x;
		cin>>x;
		for(int j=0; j<x.size(); j++)
		{
			for(int k=0; k<n; k++)
				cout<<x[j];
		}
		cout<<'\n';
	}
	
}