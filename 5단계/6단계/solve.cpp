#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int score[1000] = {0,};
	int max = 0;
	for(int i=0; i<t; i++)
	{
		cin>>score[i];
		if(score[i]>max)
			max = score[i];
	}
	double sum = 0;
	for(int i=0; i<t; i++){
		sum += ((float)score[i]/max) * 100;
	}
	printf("%.2f",float(sum/t));
}