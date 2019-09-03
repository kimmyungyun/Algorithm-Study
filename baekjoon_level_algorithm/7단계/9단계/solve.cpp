#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string A;
	string word[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	cin>>A;
	int cnt = A.size();
	for(int i=0; i<8; i++)
	{
		size_t pos = 0;
		
		while((pos = A.find(word[i], pos)) != string::npos)
		{
			A.replace(pos, word[i].size(), "A");
			pos += 1;
		}
	}
	cout<<A.size();
}