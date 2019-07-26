#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    char x;
    if(a>=90 && a<=100)
        x = 'A';
    else if(a>=80 && a<=89)
        x = 'B';
    else if(a>=70 && a<=79)
        x = 'C';
    else if(a>=60 && a<=69)
        x = 'D';
    else
        x = 'F';
    cout<<x;
}