#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    string x;
    if(a>b)
    	x = '>';
    else if(a<b)
    	x = '<';
    else
    	x = "==";
    cout<<x;
    return 0;
}