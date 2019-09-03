#include <iostream>
using namespace std;
int main()
{
    int A, n, a;
    cin>>A>>n;
    for(int i=0; i<A; i++)
    {
        cin>>a;
        if(a<n)
            cout<<a<<" ";
    }
}