#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int N;
	cin>>N;
	//0의 개수는 5의 개수에 따라 달라진다.
	int ans = (N/5) + (N/25) + (N/125);
	cout<<ans;
}