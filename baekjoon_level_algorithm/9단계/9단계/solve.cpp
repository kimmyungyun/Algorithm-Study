#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

double pi = 3.14159265358979323846;
int main()
{
	double R;
	cin>>R;
	double area, area2;
	area = pi * R * R;
	area2 = 2 * R * R;
	printf("%.6f\n", area);
	printf("%.6f", area2);
	return 0;
}