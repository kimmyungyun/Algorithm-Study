#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int people[1000] = {0,};
	for(int i=0; i<t; i++)
	{
		int N;
		cin>>N;
		float score = 0;
		for(int j=0; j<N; j++)
		{
			cin>>people[j];
			score += people[j];
		}
		score /= N;
		int cnt = 0;
		for(int j=0; j<N; j++)
		{
			if(people[j]>score)
				cnt++;
		}
		printf("%.3lf%%\n", (float)cnt/N*100);
	}

}